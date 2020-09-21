//Accepting array elements using pointer
#include<stdio.h>

int main(){
    //Your code here
    int *data[10];
    int i;
    printf("Enetr elements for array: \n");
    for(i = 0;i<=9;i++){
        
        scanf("%d",data+i);
    }

    printf("Entered elements: \n");
    for(i = 0;i<=9;i++)
        printf("%d\n",*(data+i));
    return 0;
}