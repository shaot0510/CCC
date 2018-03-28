//
//  main.c
//  the greatest common divisor and the least common multiple
//
//  Created by Owner on 3/27/18.
//  Copyright © 2018 Owner. All rights reserved.
//

#include <stdio.h>

int main(){
    int num1,num2,x,y,temp;
    scanf("%d %d",&num1,&num2);
    x=num1>num2?num1:num2;
    y= num1+num2-x;
    while(x!=0){
        temp=y%x;
        y=x;
        x=temp;
    }
    printf("the greatest common divisor：%d\n",y);
    printf("the least common multiple：%d\n",num1*num2/y);
}
