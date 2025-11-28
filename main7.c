//Q7: Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    printf("your value before swap is %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    
    
    printf("your value after swap is %d and %d",a,b);
    return 0;
    
}
/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
