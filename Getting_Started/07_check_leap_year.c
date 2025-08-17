// Check if the Year is a Leap Year or Not in C

// Method 1: Using if-else Statements 1


#include<stdio.h>

void main(){
    int year;

    printf("Enter a year to check Leap or not: ");
    scanf("%d",&year);

    if(year%400==0)
        printf("Year %d is a Leap Year.",year);
    else if(year%100==0)
        printf("Year %d is a not Leap Year.",year);
    else if(year%4==0)
        printf("Year %d is a Leap Year.",year);
    else
        printf("Year %d is not a Leap Year.",year);

}

// Method 2: Using if-else Statements 2

#include<stdio.h>

void main(){
    int year;

    printf("Enter a year to check Leap or not: ");
    scanf("%d",&year);

    if((year%400==0)||(year%4==0 && year%100!=0))
        printf("year %d is a Leap Year.",year);
    else
        printf("Year %d is not a Leap Year.",year);


}
