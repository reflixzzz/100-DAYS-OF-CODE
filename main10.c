//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
    int totalseconds;
    int hours,minutes,seconds;
    printf("enter time in seconds");
    scanf("%d", &totalseconds);
    hours=totalseconds/3600;
    minutes=(totalseconds%3600)/60;
    seconds=totalseconds%60;
    printf("the totalseconds in hours:minutes:seconds is %d:%d:%d",hours,minutes,seconds);
    return 0;
}
    
    
         
