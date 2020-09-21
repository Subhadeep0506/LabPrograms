#include<stdio.h>

int main(){
    
    int i;
    int k;
    int *p;
    i = 42;
    k = i;
    p = &i;
    k = 75;
    printf("i = %d\n",i);
    return 0;
}