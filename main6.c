//Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter your two nummbers\n");
    scanf("%d%d", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("your first value is %d and second is %d\n",a,b);
    return 0;
    
    
}

