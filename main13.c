//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main(){
    int n;
    printf("enter the year");
    scanf("%d", &n);
    if(n%400==0){
        printf("%d is leap year\n",n);
    }
    else if(n%100==0){
        printf("%d is not a leap year\n",n);
    }
    else if(n%4==0){
        printf("%d is a leap year\n",n);
    }
    else{
        printf("%d is not a leap year\n",n);
    }
    return 0;


  
         
}
/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
