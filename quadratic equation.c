/*
    project: quadratic equation solution
    author: Valentine
    date: 26th October 2021
    compiler: GCC
    language: C99
    License: MIT

    INPUTS -> a,b,c
    OUTPUTS -> X1,X2

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //variable declaration
    int a,b,c;
    float x1,x2;

    //capture input
    printf("quadratic equation solver!\n");
    printf("enter the values a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);

    //processing/computation
    if((b*b-4*a*c) == 0) {
        x1 = x2 = (-b + sqrt(b*b-4*a*c)) /(2*a);
    }
     if((b*b-4*a*c) == 0) {
        x1 = (-b + sqrt(b*b-4*a*c)) /(2*a);
        x2 = (-b - sqrt(b*b-4*a*c)) /(2*a);

    }if((b*b-4*a*c) == 0) {
         printf("the equation has no roots\n");
        exit(1);
    }

    //output
    printf("the values of x are %f and %f\n",x1,x2);
    return 0;
}
