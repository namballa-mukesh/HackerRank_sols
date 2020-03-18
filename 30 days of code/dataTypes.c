//link for problem : https://www.hackerrank.com/challenges/30-data-types/problem

/*
Task:
Complete the code in the editor below. The variables i, d, s and  are already declared and initialized for you. You must:
Declare 3 variables: one of type int, one of type double, and one of type String.
Read 3 lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your 3 variables.
Use the + operator to perform the following operations:
1)Print the sum of i plus your int variable on a new line.
2)Print the sum of d plus your double variable to a scale of one decimal place on a new line.
3)Concatenate s with the string you read as input and print the result on a new line.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j;
    double e;
    char str[100];
    scanf("%d\n",&j);
    scanf("%lf\n",&e);
    gets(str);
    printf("%d\n",i+j);
    printf("%.1f\n",d+e);
    printf("%s",s);
    puts(str);
    return 0;
}
