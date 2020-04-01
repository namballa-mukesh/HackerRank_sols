// Problem Link : 

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n,rem=0,count=0,max=0;
    scanf("%d",&n);
   while (n>0) {
       rem=n%2;
       n=n/2;
       if(rem==1) {
           count++;
           if(count>=max) {
               max=count;
           }
       }
       else {
           count=0;
       }
   }
   if(max>=count){
        printf("%d",max);
    }
    else
    {
        printf("%d",count);
    }
}
