// Ques26: Program to print numbers from 1 to n

#include <stdio.h>
int main() {
    int n;
    printf("How many numbers you wanna print: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        printf("%d\n", i);
    }
}