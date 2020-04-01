 // Problem Link : https://www.hackerrank.com/challenges/30-2d-arrays/problem
 
 #include<stdio.h>
int main() {
    int i,j,sum,max=-63,arr[6][6];
    for(i=0;i<6;i++) {
        for(j=0;j<6;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1;i<=4;i++) {
        for(j=1;j<=4;j++) {
            sum=arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i][j]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
            if(max<sum) {
                max=sum;
            }
            else {
                sum=sum;
            }
        }
    }
    printf("%d",max);
}
