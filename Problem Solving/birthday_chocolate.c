// Problem Link : https://www.hackerrank.com/challenges/the-birthday-bar/problem

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
    int n, i, j, d, m, count, res=0;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &d, &m);
    for(i=0;i<n;i++) {
        count=0;
        for(j=i; j<i+m; j++)  {
            count+=arr[j];
        }
        if(count==d)  {
            res++;
        }
    }
    printf("%d", res);

}
