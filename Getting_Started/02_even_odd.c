// Method 1: For user input number

#include<stdio.h>
void main(){
    int num;

    printf("Enter a Number to check Even or Odd: ");
    scanf("%d",&num);

    if(num%2==0)
        printf("%d is a Even Number.",num);

    else
        printf("%d is a Odd Number.",num);
}

// Method 2: For this method, we use the ternary operator in C
#include<stdio.h>

void main(){
    int num;

    printf("Enter a Number to check Even or Odd: ");
    scanf("%d",&num);

    (num%2==0)?printf("%d is Even Number.",num):printf("%d is Odd Number.",num);

}

