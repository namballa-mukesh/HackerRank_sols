// Problem Link : https://www.hackerrank.com/challenges/compare-the-triplets/problem

#include<stdio.h>
int main(){
int a_count=0,a[3],b_count=0,b[3],result_count[2];
int i,j,k;
for(i=0;i<3;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
    scanf("%d",&b[i]);
}
for(j=0;j<3;j++)
{
    if (a[j]>b[j])
    {
        a_count+=1;

    }
    else if (a[j]<b[j])
    {
        b_count+=1;
    }
    else
    {
        a_count+=0;
        b_count+=0;
    }
}
for(k=0;k<2;k++)
{
if (k==0)
 {
    result_count[0]=a_count;
 }
if (k==1)
 {
    result_count[1]=b_count;
 }
printf("%d\ ",result_count[k]);
}
}
