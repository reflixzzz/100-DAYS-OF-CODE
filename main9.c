//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
//s=simple interest,c=compound interest,a=amount,p=principal
//r=rate,t=time
#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,s,c,a;
    printf("enter principal amoount");
    scanf("%f", &p);
    printf("enter rate");
    scanf("%f", &r);
    printf("enter time");

    scanf("%f", &t);
    
    s=(p*r*t)/100;
    a=p * pow((1+r/100),t);
    c=a-p;
    printf("the simple compound for interest is %f", s);
    printf("the compound interest is %f",c);
    return 0;
    
    
}
