#include <stdio.h>
#include <string.h>

#define EMPTY 0
#define TAKEN 1
#define MAX_SEATS 5

// Structure to represent a seat record of a plane
typedef struct {
    char name[20];
    int ID;
    int status;
} Seat;

// Global array of 5 structures to hold the seat data
Seat seats[MAX_SEATS];

// Initializes seat numbers (1-5), status (EMPTY), and names (empty string)
void initSeats() {
    for (int i = 0; i < MAX_SEATS; i++) {
        seats[i].ID = i + 1;
        seats[i].status = EMPTY;
        strcpy(seats[i].name, "");
    }
}

// (1) listTakenSeat(): Prints list of currently assigned seats
void listTakenSeat() {
    printf("listTakenSeat():\n");
    int anyTaken = 0;
    
    for (int i = 0; i < MAX_SEATS; i++) {
        if (seats[i].status == TAKEN) {
            printf("Customer name: %s\n", seats[i].name);
            printf("Seat number (ID): %d\n", seats[i].ID);
            anyTaken = 1;
        }
    }
    
    // Display message if no seats have been assigned yet
    if (!anyTaken) {
        printf("The seat assignment list is empty\n");
    }
}

// (2) assignSeat(): Assigns a customer to a selected seat
void assignSeat() {
    printf("assignSeat():\n");

    // Check if the plane is full (all 5 seats TAKEN)
    int takenCount = 0;
    for (int i = 0; i < MAX_SEATS; i++) {
        if (seats[i].status == TAKEN) takenCount++;
    }
    if (takenCount == MAX_SEATS) {
        printf("The plane is full\n");
        return;
    }

    int seatNum;
    printf("Enter the seat number:\n");
    scanf("%d", &seatNum);
    
    // Validation loop for seat selection
    while (1) {
        if (seatNum < 1 || seatNum > 5) {
            printf("Please enter a seat number between 1 and 5\n");
            scanf("%d", &seatNum);
        } else if (seats[seatNum - 1].status == TAKEN) {
            printf("Occupied! Please choose another seat\n");
            scanf("%d", &seatNum);
        } else {
            break; // Seat is valid and empty
        }
    }

    printf("Enter customer name:\n");
    scanf(" "); // Clears leading whitespace/newline from the buffer
    fgets(seats[seatNum - 1].name, 20, stdin);
    
    // Remove trailing newline character from fgets input
    int len = strlen(seats[seatNum - 1].name);
    if (len > 0 && seats[seatNum - 1].name[len - 1] == '\n') {
        seats[seatNum - 1].name[len - 1] = '\0';
    }
    
    seats[seatNum - 1].status = TAKEN;
    printf("The seat has been assigned successfully\n");
}

// (3) removeSeat(): Removes a customer from a selected seat
void removeSeat() {
    printf("removeSeat():\n");

    // Check if there are any seats assigned before attempting removal
    int anyTaken = 0;
    for (int i = 0; i < MAX_SEATS; i++) {
        if (seats[i].status == TAKEN) { anyTaken = 1; break; }
    }
    if (!anyTaken) {
        printf("All the seats are vacant\n");
        return;
    }

    int seatNum;
    printf("Enter the seat number:\n");
    scanf("%d", &seatNum);
    
    // Validation loop for seat removal
    while (1) {
        if (seatNum < 1 || seatNum > 5) {
            printf("Please enter a seat number between 1 and 5\n");
            scanf("%d", &seatNum);
        } else if (seats[seatNum - 1].status == EMPTY) {
            printf("Empty! Enter another seat number for removal\n");
            scanf("%d", &seatNum);
        } else {
            break; // Seat is valid for removal
        }
    }

    seats[seatNum - 1].status = EMPTY;
    strcpy(seats[seatNum - 1].name, ""); // Reset name field
    printf("Removal is successful\n");
}

int main() {
    initSeats(); // Set up initial plane state
    int choice = 0;

    // Continuous loop until the user chooses to quit
    while (choice != 4) {
        printf("NTU AIRLINES SEATING RESERVATION PROGRAM:\n");
        printf("1: listTakenSeat()\n");
        printf("2: assignSeat()\n");
        printf("3: removeSeat()\n");
        printf("4: quit\n");
        
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: listTakenSeat(); break;
            case 2: assignSeat();    break;
            case 3: removeSeat();    break;
            case 4: return 0;        // Quit the program
            default: break;
        }
    }
    return 0;
}