// Find the Greatest of the Three Numbers in C

// Method 1: Using if-else Statements 1

#include<stdio.h>

void main(){
    int num1,num2,num3;

    printf("Enter three numbers  to check equality: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1==num2 && num1==num3)
        printf("All values are Equal.");

    else if(num1>=num2 && num1>=num3)
        printf("%d is greatest.",num1);

    else if(num2>=num1 && num2>=num3)
        printf("%d is greatest.",num2);

    else if(num3>=num1 && num3>=num2)
        printf("%d is greatest.",num3);

}

// Method 2: Using if-else Statements 2

#include<stdio.h>

void main(){
    int num1,num2,num3;

    printf("Enter three numbers  to check equality: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1==num2 && num1==num3)
        printf("All values are Equal.");

    else if(num1>=num2 && num1>=num3)
        printf("%d is greatest.",num1);

    else if(num2>=num1 && num2>=num3)
        printf("%d is greatest.",num2);

    else
        printf("%d is greatest.",num3);

}


// Method 3: Using Ternary Operator

#include<stdio.h>

void main(){
    int num1,num2,num3;
    int temp,result;

    printf("Enter number to compare: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1==num2 && num1==num3)
        printf("%d and %d are Equal.",num1,num2);
    else
        temp=(num1>=num2 && num1>=num3)?num1:num2;

        result=(temp>num3)?temp:num3;

        printf("%d is the greatest.",result);


}

