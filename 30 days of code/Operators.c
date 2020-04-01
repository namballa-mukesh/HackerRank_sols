//Problem Link : https://www.hackerrank.com/challenges/30-operators/problem

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    double meal_cost;
    int tip_percent,tax_percent;
    scanf("%lf",&meal_cost);
    scanf("%d",&tip_percent);
    scanf("%d",&tax_percent);
    double tip,tax;
    int total_cost;
    tip=(meal_cost*tip_percent)/100;
    tax=(meal_cost*tax_percent)/100;
    meal_cost+=tip+tax;
    total_cost=round(meal_cost);
    printf("%d",total_cost);
}
