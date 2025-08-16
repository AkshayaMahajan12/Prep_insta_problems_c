// Check if a Number is Positive or Negative in C
// Given an integer input, the objective is check whether the given integer is Positive or Negative. In order to do so we have the following methods,

// Method 1: Using Brute Force
// Method 2: Using Nested if-else Statements
// Method 3: Using the ternary operator

// Method 1: Using Brute Force

// #include<stdio.h>

// void main(){
//     int num;
//     printf("Enter a number to check Positive or Negative: ");
//     scanf("%d",&num);

//     if(num<0)
//         printf("%d Number is Negative.",num);
        
//     else if(num>0)
//         printf("%d Number is Positive.",num);
//     else
//         printf("Entered Number is Zero.");
// }

// Method 2: Using Nested if-else Statements

// #include<stdio.h>

// void main(){
//     int num;
    
//     printf("Enter a number to check Positive or Negative: ");
//     scanf("%d",&num);

//     if(num>=0)
//     {
//         if(num>0)
//             printf("%d is a Positive Number.",num);
//         else
//             printf("Entered Number is Zero(0).");
//     }
//     else
//         printf("%d is a Negative Number.",num);

// }


// Method 3: Using the ternary operator

//ternary operator: condition ? expression_if_true : expression_if_false;

#include<stdio.h>

void main(){
    int num;

    printf("Enter a number to check Positive or Negative: ");
    scanf("%d",&num);

    if(num==0)
        printf("Entered Number is Zero(0).");
    else
        (num>0) ? printf("%d is a Positive Number.",num):printf("%d is a Negative Number.",num);

}