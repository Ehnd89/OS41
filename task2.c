#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int  add()
{  
     int addition;
    int a,b;
    printf("Enter the two numbers:");
      scanf("%d %d",&a,&b);
    printf("Sum of %d and %d is\n",a,b);
    addition=a+b;
   
    return addition;
}

 int  sub()
{
    int subtraction;
    int a,b;
    printf("Enter the two numbers:");
      scanf("%d %d",&a,&b);
    printf("Subtraction of %d and %d is\n",a,b);
    subtraction=a-b;
   
    return subtraction;
}

int  mul()
{
    int multiplication;
    int a,b;
    printf("Enter the two numbers:");
      scanf("%d %d",&a,&b);
    printf("Multiplication of %d and %d is\n",a,b);
    multiplication=a*b;
   
    return multiplication;
}

int  divide()
{
    int divison;
    int a,b;
    printf("Enter the two numbers:");
      scanf("%d %d",&a,&b);
    printf("Divison of %d and %d is\n",a,b);
    divison=a/b;
   
    return divison;
}

int gone()
{  printf("Exit the program");
    exit(0);
    return 0;
}


int main()
{
   
     
      int addition;
      char no;
    printf("Enter your choice \n'0' - add \n'1' - subtract\n'2' - multiply\n'3' - divide\n'4' - exit program ");
    fflush(stdin);
    scanf(" %c",&no);
    (no=='0'  && printf("%d" ,add()));
    (no=='1'  &&  printf("%d",sub()));
    (no=='2'  &&  printf("%d",mul()));
    (no=='3'  &&  printf("%d",divide()));
    (no=='4'  &&  printf("%d",gone()));

    
    
    return 0;
   
}


/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
