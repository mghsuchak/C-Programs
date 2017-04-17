#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int Factorial(int n){
    if(n==0)
        return 1;
    else
        return n*Factorial(n-1);
}

int main(){
    int n; 
    scanf("%d",&n);
    
    int result = Factorial(n);
    printf("%d", result);
    
    return 0;
}
