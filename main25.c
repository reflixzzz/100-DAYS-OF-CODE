//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main(){
    char op;
    int num1,num2,a,b,c,d;
    
    
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&op);
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    switch(op){
        case '+':
            a=num1+num2;
            printf("The sum of two numbers is %d\n",a);
            break;
        case '-':
            b=num1-num2;
            printf("The difference between two numbers is %d\n",b);
            break;
        case '*':
            c=num1*num2;
            printf("The product of two numbers is %d\n",c);
            break;
        case '/':
            if(num2!=0){
                d=num1/num2;
                printf("The division of two numbers is %d\n",d);
            }
            else{
                printf("Error\n");
            }
        default:
            printf("Invalid operators");
            
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
