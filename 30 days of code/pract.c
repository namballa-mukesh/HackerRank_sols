/* 
#include<stdio.h>
int main()	{
	int *p = (int *)main;
	printf(*p);
}
*/

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
    int i, j, max=0, count1=0;
    //int* fact = (int*)malloc(sizeof(int));
    for(i=1; i<=n; i++)  {
        scanf("%d", &a[i]);
    }
    for(i=1; i<=m; i++)  {
        scanf("%d", &b[i]);
        if(b[i]>max)  {
            max=b[i];
        }
    }
    int fact[max];
    for(i=2; i<=max; i++)  {
        int count=0;
        for(j=1; j<=m; j++)  {
            if(b[j]%i==0)  {
                count++;
            }
        }
	if(count==m)  {fact[i]=i;}
    }
    for(i=0;i<max;i++){printf("\n%d\n",fact[i]);}
    //int len = sizeof(fact)/sizeof(fact[0]);
    for(i=0; i<max; i++)  {
        for(j=0; j<n; j++)   {
            if(fact[i]!=0 && fact[i]%a[j]==0)  {
                count1++;
            }
        }
    }
    printf("%d", count1);
}