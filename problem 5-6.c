//
//  main.c
//  problem 5-6
//
//  Created by Owner on 3/25/18.
//  Copyright © 2018 Owner. All rights reserved.
//

/*在数组中查找指定元素   (10分)
输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
输入一个正整数 n (1<n<=10)，然后输入n个整数存入数组a中，再输入一个整数x，在数组a中查找x，如果找到则输出相应元素的最小下标，否则输出"Not found"。
要求定义并调用函数search(list, n, x)，它的功能是在数组list中查找元素x，若找到则返回相应元素的最小下标，否则返回-1，函数形参 list 的类型是整型指针，形参n和x的类型是int，函数的类型是int。
输出格式语句：printf("index = %d\n", );
输入输出示例：括号内为说明，无需输入输出 */

#include<stdio.h>
int main()
{
    int search(int list[], int n, int x);
    int n,i,a[10],res,x,repeat,ri;
    scanf("%d",&repeat);
    for(ri=1;ri<=repeat;ri++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&x);
        res=search(a,n,x);
        if(res!=-1)
            printf("index = %d\n",res);
        else
            printf("Not found\n");
    }
    return 0;
}
int search(int list[], int n, int x)
{
    int i,q=-1;
    for(i=0;i<n;i++)
    {
        if(list[i]==x)
        {
            return i;
        }
        
    }
    return q;
}


