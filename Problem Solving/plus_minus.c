// Problem Link : https://www.hackerrank.com/challenges/plus-minus/problem

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
    int n;
    scanf("%d",&n);
    int a[n],i;
    float x=0,y=0,z=0;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    if(a[i]>0) {
        x++;
    }
    else if(a[i]<0) {
        y++;
    }
    else {
        z++;
    }
    }
    printf("%6f\n", x/n);
    printf("%6f\n", y/n);
    printf("%6f\n", z/n);

}
