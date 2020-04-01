// Problem Link : https://www.hackerrank.com/challenges/kangaroo/problem


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
    int x1, v1, x2, v2;
    float k;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    if(v1==v2)  {
        if(x1==x2)  {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else  {
        k=(x2 - x1)/(v1 - v2);
        if(k>0 && (x2 - x1)%(v1 -v2)==0)   {
            printf("YES");
        }
        else    {
            printf("NO");
        }
    }
}
