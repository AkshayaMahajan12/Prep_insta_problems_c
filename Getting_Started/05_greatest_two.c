// Find the Largest of the Two Numbers in C

// Method 1 : Using if – else Statements

#include<stdio.h>

void main(){
    int num1,num2;
    printf("Enter number to compare: ");
    scanf("%d%d",&num1,&num2);

    if(num1==num2)
        printf("%d and %d are Equal.",num1,num2);
    else if(num1>num2)
        printf("%d is greater than %d.",num1,num2);
    else
        printf("%d is less than %d.",num1,num2);
}

// Method 2 : Using Ternary Operator


#include<stdio.h>

void main(){
    int num1,num2;

    printf("Enter number to compare: ");
    scanf("%d%d",&num1,&num2);

    if(num1==num2)
        printf("%d and %d are Equal.",num1,num2);
    else
        (num1>num2)?printf("%d is greater than %d.",num1,num2):printf("%d is less than %d.",num1,num2);

}


