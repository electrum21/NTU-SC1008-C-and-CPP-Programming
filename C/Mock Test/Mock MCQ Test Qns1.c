What will be the output of the program?

#include <stdio.h>

int main()

{

   int i,n[4]={1};

   for (i=1;i<=3;i++)

   {

    n[i]=n[i-1]*2+1;

     printf("%d ",n[i]);

   }

   return 0;

}

What will be the output of the program?

#include <stdio.h>

int main()

{

   int i,n[4]={1};

   for (i=1;i<=3;i++)

   {

    n[i]=n[i-1]*2+1;

     printf("%d ",n[i]);

   }

   return 0;

}

What will be the output of the program?

#include <stdio.h>

int fun(int a, int b);

int main()

{

   printf("%d\n",fun(4,2));

   return 0;

}

int fun(int a, int b)

{

   if (b==0)

     return a;

   else

     return(fun(--a,--b));

}


What will be the output of the program?

#include <stdio.h>

int main()  

{

   int x[]={1,2,3};

   int s,i,*p;

   s=1; p=x;

   for (i=0; i<3; i++)

      s*=*(p+i);

   printf("%d\n",s);

   return 0;

}

What will be the output of the program?

#include <stdio.h>

int main()

{

   int a[2][3] = { {1,2,3}, {4,5,6} };

   int m, *ptr;

   ptr=&a[0][0];

   m = (*ptr)*(*(ptr+2))*(*(ptr+4));

   printf("%d\n", m);

   return 0;

}


What will be the output of the program?

#include <stdio.h>

int fun1();

int fun2();

void fun3(int,int);

int main()

{

   fun3(fun1(),fun2());

   return 0;

}

int fun1()

{

   int k=20;

   return k;

}

int fun2()

{

   int a=15;

   return a;

}

void fun3(int a, int b)

{

   int k;

   k=(a-b)*(a+b);

   printf("%d\n",k);

}


What will be the output of the program?

#include <stdio.h>

void fun1(int n);

int main()

{

   fun1(3);

   return 0;

}

void fun1(int n)

{

   int i = 0; 

   if (n > 1)

     fun1(n-1);

   for (i = 0; i < n; i++)

     printf("*");

}


What will be the output of the program?

#include <stdio.h>

double fun(int,int,int);

int main()

{

   int a=4,b=6,c=7;

   double d;

   d=fun(a,b,c);

   printf("%lf\n",d);

   return 0;

}

double fun(int a, int b, int c)

{

   double s;

   s=a%b*c;

   return s;

}


What will be the output of the program?

#include <stdio.h>

int main()

{

    int x=1,a=0,b=0;

    switch (x)

    {

        case 0: b++;

        case 1: a++;

        case 2: a++; b++;

    }

    printf("%d,%d\n",a,b);

    return 0;

}

What will be the output of the program?

#include <stdio.h>

void fun(int *px,int *py);

int main()

{

   int a,b;

   a=5; b=10;

   fun(&a,&b);

   printf("%d %d\n",a,b);

   return 0;

}

void fun(int *px,int *py)

{

   int temp;

   temp=*px; *px=*py; *py=temp;

}

What will be the output of the program?

#include <stdio.h>

void fun(char *a, int n);

int main()

{

   int n=12345;

   char str[10]="";

   fun(str,n);

   puts(str);

   return 0;

}

void fun(char *a, int n)

{

   int i;

   if ( (i=n/10) != 0)

     fun(a+1, i);

   *a=n%10+'0';

}


What will be the output of the program?

#include <stdio.h>

struct stu {

    int x;

    char c;

};

void func(struct stu *b);

int main()

{

    struct stu a={12,'y'}, *p=&a;

    func(p);

    printf("%d,%c\n",a.x,a.c);

    return 0;

}

void func(struct stu *b)

{

    b->x=b->x+9;

    b->c='n';

}

What will be the output of the program, after executing the following input (<CR> = the return key on the keyboard):

9876543210<CR>

#include <stdio.h>

int main()

{

    int a; float b,c;

    scanf("%2d%3f%4f",&a,&b,&c);

    printf("%d,%f,%f\n",a,b,c);

    return 0;

}