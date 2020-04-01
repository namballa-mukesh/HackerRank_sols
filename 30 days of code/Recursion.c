// Problem Link : https://www.hackerrank.com/challenges/30-recursion/problem

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int factorial(int n) {
    if (n<=1) {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main() {
    int n,x;
    scanf("%d",&n);
    x=factorial(n);
    printf("%d",x);
}
