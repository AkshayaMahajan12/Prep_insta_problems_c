// Method 1 : Using Brute Force

// #include<stdio.h>

// void main(){
//     int n1,n2,i;
//     int sum;
//     printf("Enter range to calculate sum(starting): ");
//     scanf("%d",&n1);
//     printf("Enter range to calculate sum(end): ");
//     scanf("%d",&n2);

//     for(i=n1;i<=n2;i++){
//         sum+=i;
//     }
//     printf("Sum of n natural numbers in given Range is %d",sum);

// }


// Method 2 : Using the Formula


#include<stdio.h>

void main(){
    int n1,n2,i;
    int sum;
    printf("Enter range to calculate sum(starting): ");
    scanf("%d",&n1);
    printf("Enter range to calculate sum(end): ");
    scanf("%d",&n2);

    sum=(((n2)*(n2+1))/2)-(((n1)*(n1+1))/2);

    printf("Sum of n natural numbers in given Range is %d",sum);
}




