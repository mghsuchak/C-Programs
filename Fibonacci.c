#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int Fibonacci(int n){
    if(n<=1){
         return n;
    }
    int f1 = 0, f2 = 1, f;
    for(int i=2; i<n; i++){
        f = f1+f2;
        f1 = f2;
        f2 = f;
    }
    return f;
}

int main(){
    int n; 
    scanf("%d",&n);
    
    int result = Fibonacci(n);
    printf("Number at %d postion in series id %d", n, result);
    
    return 0;
}
