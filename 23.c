/*
Ques23:
Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.
*/

#include <stdio.h>
int main() {
    int days;
    float fine;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    if (days <=5){
        fine=days*2;
        printf("Fine: ₹%.2f\n", fine);
    }
    else if (days >5 && days <=10){
        fine=days*4 - 10;
        printf("Fine: ₹%.2f\n", fine);
    }
    else if (days > 10 && days <=30){
        fine=days*6-30;
        printf("Fine: ₹%.2f", fine);
    }
    else {
        printf("Membership cancelled!!\n");
    }
}