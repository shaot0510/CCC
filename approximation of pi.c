//
//  main.c
//  approximation of pi
//
//  Created by Owner on 3/23/18.
//  Copyright © 2018 Owner. All rights reserved.
//

#include<stdio.h>
#include<math.h>
int main()
{
    double a=1,b=3,i=1,j=3;
    double eps,m=1,sum=0;
    scanf("%le", &eps);
    while(m>eps)
    {
        m=a/b;
        sum=sum+m;
        i=i+1;
        j=j+2;
        a=a*i;
        b=b*j;
        
    }
    printf("PI = %.5lf\n",2+2*sum);
    
    return 0;
}

