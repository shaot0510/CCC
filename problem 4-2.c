//
//  main.c
//  problem 4-2
//
//  Created by Owner on 3/30/18.
//  Copyright © 2018 Owner. All rights reserved.
//
/* 企业发放的奖金根据利润提成。利润(I)低于或等于 10 万元时，奖金可提 10%;利润高于 10 万元， 低于 20 万元时，低于 10 万元的部分按 10%提成，高于 10 万元的部分，可可提成 7.5%;20 万到 40 万之 间时，高于 20 万元的部分，可提成 5%;40 万到 60 万之间时高于 40 万元的部分，可提成 3%;60 万到 100 万之间时，高于 60 万元的部分，可提成 1.5%，高于 100 万元时，超过 100 万元的部分按 1%提成，从 键盘输入当月利润 I，求应发放奖金总数?
 
 */

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
