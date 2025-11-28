//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main(){
    float cp,sp,profit,loss,percent;
    printf("Enter cost price and selling price:");
    scanf("%f %f", &cp,&sp);
   
    if(sp>cp){
        profit=sp-cp;
        percent= (profit/cp)*100;
        printf("The percent of profit  is %.0f%%\n",percent);
        
    }
    else if(sp<cp){
        loss=cp-sp;
        percent=(loss/cp)*100;
       
        printf("The percent of loss is %.0f%%\n",percent);
    }
    else{
        printf("There is no loss and profit\n");
    }
    return 0;
        
    
    
    
}
/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
