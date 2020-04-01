// Problem Link : https://www.hackerrank.com/challenges/30-review-loop/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i,j;
scanf("%d",&n);
char str[10][10000];
for(i=0; i< n ; i++) {
    scanf("%s",&str[i]);
    for(j=0;j<strlen(str[i]);j=j+2) {
        printf("%c",str[i][j]);
    }
    printf(" ");
    for(j=1;j<strlen(str[i]);j=j+2) {
        printf("%c",str[i][j]);
    }
printf("\n");
}
}
