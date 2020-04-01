// Problem Link : https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

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
    int arr[26], max=0;
    char str[10];
    for(int i=0; i<26; i++)  {
        scanf("%d", &arr[i]);
    }
    scanf("%s", str);
    for(int i=0; i<strlen(str); i++)  {
        int temp=(int)str[i];
        if(arr[temp-97]>max)  {
            max=arr[temp-97];
        }
    }
    printf("%d", max*strlen(str));

}
