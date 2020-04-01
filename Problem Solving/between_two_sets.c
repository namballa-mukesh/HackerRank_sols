// Problem Link : https://www.hackerrank.com/challenges/between-two-sets/problem


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

int main()  {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m]; //why 2 arrays with same name and different size cannot be declared?
    int i, j, max=0;
    for(i=0; i<n; i++)  {
        scanf("%d", &a[i]);
    }
    for(i=0; i<m; i++)  {
        scanf("%d", &b[i]);
        if(b[i]>max)  {
            max=b[i];
        }
    }
    int count, k=0, res=0;
    //int* fact = (int*)malloc(sizeof(int));
    int fact[max];
    for(i=1; i<=max; i++)  {
        count=0;
        for(j=0; j<m; j++)  {
            if(b[j]%i==0)  {
                count++;
            }
        }
        if(count==m)  {
            fact[k]=i;
            k++;
        }
    }
    int t;
    for(i=0; i<k; i++)  {
        t=0;
        for(j=0; j<n; j++)  {
            if(fact[i]%a[j]==0)  {
                t++;
            }
        }
        if(t==n)  {
            res++;
        }
    }
    printf("%d",res);
}
