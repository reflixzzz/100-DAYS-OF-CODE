//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three sides:");
    scanf("%d %d %d", &a,&b,&c);
    if(a==b && b==c){
        printf("the traingle is equilateral\n");
    }
    else if(a!=b && b!=c ){
        printf("the traingle is scalene\n");
        
    }
    else{
        (a==b || b==c && a!=b || b!=c);
        printf("the traingle is isoceles\n");
    }
    return 0;
    
      
        
    
}
/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
