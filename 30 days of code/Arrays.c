//https://www.hackerrank.com/challenges/30-arrays/problem

#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&A[n-i-1]);
    }
    for(int i=0;i<n;i++) {
        printf("%d",A[i]);
        printf(" ");
    }
}
