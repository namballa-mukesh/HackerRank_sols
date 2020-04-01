// Problem Link : https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, k,i, j, count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)  {
        for(j=0; j<n; j++)  {
            if(i<j && (a[i]+a[j])%k==0)  {
                count++;
            }
        }
    }
    printf("%d", count);
}
