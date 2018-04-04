//
//  main.c
//  problem4-15
//
//  Created by Owner on 4/3/18.
//  Copyright © 2018 Owner. All rights reserved.
/* 利用条件运算符的嵌套来完成此题:学习成绩>=90 分的同学用 A 表示，60-89 分之间的用 B 表示， 60 分以下的用 C 表示。
 */

#include<stdio.h>

int main()

{
    
    int score;
    
    char grade;
    
    scanf("%d",&score);
    
    grade=(score>=90) ? 'A':(grade=(score>=60) ? 'B':'C');
    
    printf("%c \n",grade);
    
    return 0;
    
}
