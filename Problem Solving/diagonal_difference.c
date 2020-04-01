// Problem Link : https://www.hackerrank.com/challenges/diagonal-difference/problem

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int a[n][n], l=0, r=0, d; //initializing vaariables is very important i.e l,r.Because they will take default value. 
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
            if(i==j) {
                l=l+a[i][j];
            }
            if(j==n-i-1) {
                r=r+a[i][j];
            }
        }
    }
    d=l-r;
    printf("%d",abs(d));
}
