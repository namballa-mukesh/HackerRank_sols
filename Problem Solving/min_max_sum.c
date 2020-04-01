// Problem Link : https://www.hackerrank.com/challenges/mini-max-sum/problem

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
    int a[5];
    long int min,max,sum=0;
    for(int i=0;i<5;i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
        if(i==0) {
            max=a[i];
            min=a[i];
        }
        if(a[i]>max) {
            max=a[i];
        }
        else if(a[i]<min) { //If it is not checked, every single time when it is not a max, it will become min.
            min=a[i];
        }
    }
    printf("%ld %ld",sum-max,sum-min);
}
