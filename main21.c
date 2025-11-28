//Q21: Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main(){
    int month;
    printf("Enter a month:");
    scanf("%d", &month);
    switch(month){
        case 1:
            printf("January\n");
            printf("No of Days=31\n");
            break;
        case 2:
            printf("February\n");
            printf("No of Days=28\n");
            break;
        case 3:
            printf("March\n");
            printf("No of Days=31\n");
            break;
        case 4:
            printf("April\n");
            printf("No of Days=30\n");
            break;
        case 5:
            printf("May\n");
            printf("No of Days=31\n");
            break;
        case 6:
            printf("June\n");
            printf("No of Days=30\n");
            break;
        case 7:
            printf("July\n");
            printf("No of Days=31\n");
            break;
        case 8:
            printf("August\n");
            printf("No of Days=31\n");
            break;
        case 9:
            printf("September\n");
            printf("No of Days=30\n");
            break;
        case 10:
            printf("October\n");
            printf("No of Days=31\n");
            break;
        case 11:
            printf("November\n");
            printf("No of Days=30\n");
            break;
        case 12:
            printf("December\n");
            printf("No of Days=31\n");
            break;
    }
    
}
/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
