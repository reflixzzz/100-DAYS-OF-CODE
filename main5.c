//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float f,c;
    
    printf("enter a temperature in celsius");
    scanf("%f", &c);
    f= ((9.0/5.0)*c) + 32;
    printf("the temperature in fahrenheight is %f",f);
    return 0;
    
}
/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
