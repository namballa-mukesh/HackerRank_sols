// Problem Link : https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()  {
    int q, x, y, z, count=0;
    scanf("%d", &q);
    while(count<q)  {
        scanf("%d %d %d", &x, &y, &z);
        int d1=x-z;
        int d2=y-z;
        if(d1*d1<d2*d2)  {
            printf("Cat A\n");
        }
        else if(d1*d1>d2*d2)  {
            printf("Cat B\n");
        }
        else  {
            printf("Mouse C\n");
        }
        count++;
    }
}
