//
//  main.c
//  decomposition factor
//
//  Created by Owner on 3/27/18.
//  Copyright © 2018 Owner. All rights reserved.
//


#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    printf("%d=",n);
    for(i=2;i<=n;i++){
        while(n!=i){
            if(n%i==0){
                printf("%d*",i);
                n=n/i;
            }else{
                break;
            }
        }
    }
    printf("%d",n);
    return 0;}
