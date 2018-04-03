//
//  main.c
//  problem 4-2
//
//  Created by Owner on 3/30/18.
//  Copyright © 2018 Owner. All rights reserved.
//

#include "stdio.h"
int main()
{
    long i;
    float bonus,bon1,bon2,bon4,bon6,bon10;
    bon1=100000*0.1;
    bon2=bon1+100000*0.075;
    bon4=bon2+200000*0.05;
    bon6=bon4+200000*0.03;
    bon10=bon6+400000*0.015;
    printf("请输入利润i:");
    scanf("%ld",&i);
    if(i<=100000)
        bonus=i*0.1;
    else if(i<=200000)
        bonus=bon1+(i-100000)*0.075;
    else if(i<=400000)
        bonus=bon2+(i-200000)*0.05;
    else if(i<=600000)
        bonus=bon4+(i-400000)*0.03;
    else if(i<=1000000)
        bonus=bon6+(i-600000)*0.015;
    else
        bonus=bon10+(i-1000000)*0.01;
    printf("奖金是%10.2f\n",bonus);
}
