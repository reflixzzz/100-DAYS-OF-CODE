//Q16: Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main(){
    int a,b,c;
    printf(" Enter three digits: ");
    scanf("%d" ,&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is a largest number\n",a);
    }
    else if(b>a && b>c){
        printf("%d is a largest number\n",b);
    }
    else{
        printf("%d is a largest number\n",c);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
