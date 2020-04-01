// problem Link : https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem


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
    int n, min, max, min_count=0, max_count=0;
    scanf("%d", &n);
    int scores[n];
    for(int i=0; i<n; i++)  {
        scanf("%d", &scores[i]);
        if(i==0)  {
            min=scores[0];
            max=scores[0];
        }
        else {
            if(scores[i]>max)  {
                max=scores[i];
                max_count++;
            }
            if(scores[i]<min)  {
                min=scores[i];
                min_count++;
            }
        }
        
    }
    printf("%d %d", max_count, min_count);
}
