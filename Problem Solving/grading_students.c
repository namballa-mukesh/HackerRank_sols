// Problem Link : https://www.hackerrank.com/challenges/grading/problem

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
    int n;
    scanf("%d",&n);
    int g[n],i;
    for(i=0;i<n;i++) {
        scanf("%d",&g[i]);
        if(g[i]>=38) {
            if((g[i])%5==0) {
                g[i]=g[i];
            }
            if((g[i]+1)%5==0) {
                g[i]+=1;
            }
            if((g[i]+2)%5==0) {
                g[i]+=2;
            }
        }
    }
    for(i=0;i<n;i++) {
        printf("%d\n",g[i]);
    }
}
