#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
This Program is used to  find the sum of the digits of a factorial of a number
*/

int findFactorial(int n){
    int sum=1;
    for (int i=1; i<=n; i++) {
        sum *=  i;
    }
    return sum;
    }
void sumDigit(int n){
    int sum = 0;
    while(n>0){
        int carry = n%10;
        sum += carry;
        n /= 10;
    }
    printf("%d\n", sum);
}

int main(){
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        int n;
        scanf("%d", &n);
        int factorial = findFactorial(n);
       sumDigit(factorial);
    }
    return 0;
}

