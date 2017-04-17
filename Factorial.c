#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int Factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n; 
    scanf("%d",&n);
    
    int result = Factorial(n);
    printf("%d", result);
    
    return 0;
}