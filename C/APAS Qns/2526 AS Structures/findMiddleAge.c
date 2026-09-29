	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
typedef struct {
   char name[20]; 
   int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main() 
{
   Person man[3], middle;   
  
   readData(man);
   middle = findMiddleAge(man);
   printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
   return 0;
}
void readData(Person *p) 
{
	/*edit*/
	for (int i = 0; i < 3; i++) {
	    printf("Enter person %d:\n", (i+1));
	    scanf("%s %d", &p[i].name, &p[i].age);
	}

	/*end_edit*/
}
Person findMiddleAge(Person *p) 
{
	/*edit*/
	int age1 = p[0].age;
	int age2 = p[1].age;
	int age3 = p[2].age;
	
	if ((age1 < age2 && age2 < age3) || (age3 < age2 && age2 < age1)) {
	    return p[1];
	} else if ((age2 < age1 && age1 < age3) || (age3 < age1 && age1 < age2)) {
	    return p[0];
	} else if ((age2 < age3  && age3 < age1) || (age1 < age3 && age3 < age2)){
	    return p[2];
	}

	/*end_edit*/
}