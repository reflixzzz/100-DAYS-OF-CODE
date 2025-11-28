//Q29: Write a program to calculate the factorial of a number.
#include<stdio.h>
int main(){
    int i,n,product=1;
    printf("Enter a value: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        product=product*i;
    }
    printf("The factorial of %d is %d \n",n,product);
    return 0;
    
}
