//
//  main.c
//  prime number between 100-200
//
//  Created by Owner on 3/13/18.
//  Copyright © 2018 Owner. All rights reserved.
//

// find how many prime numbers between 100-200
#include <stdio.h>
#include<math.h>
int IsPrime(int n){
    int i=2;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int i;
    for(i=100;i<=200;i++){
        if(IsPrime(i))
            printf("%d",i);
    }
    return 0;
}
