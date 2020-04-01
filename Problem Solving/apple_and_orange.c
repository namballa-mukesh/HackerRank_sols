// Problem Link : https://www.hackerrank.com/challenges/apple-and-orange/problem


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
    int s,t;
    scanf("%d",&s);
    scanf("%d",&t);
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int at[m],bt[n],i,j,c1=0,c2=0;
    for(i=0;i<m;i++) {
        scanf("%d",&at[i]);
        at[i]=at[i]+a;
    }
    for(i=0;i<n;i++) {
        scanf("%d",&bt[i]);
        bt[i]=bt[i]+b;
    }
        for(j=0;j<m;j++) {
            if(at[j]>=s && at[j]<=t) {
                c1++;
            }
        }
        for(j=0;j<n;j++) {
            if(bt[j]>=s && bt[j]<=t) {
                c2++;
            }
        }
    printf("%d\n%d",c1,c2);
}
