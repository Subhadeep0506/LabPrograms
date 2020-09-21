#include<stdio.h>

void main(){
    //Your code here
    int arr[50];
    int size, i, n, pos;

    printf("Enter the number of elements you want to insert: ");
    scanf("%d", &size);

    printf("Now enter the elements: \n");
    for(i = 0; i < size; i++){

        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to insert: ");
    scanf("%d", &n);
    printf("Enter the position where you want to insert it: ");
    scanf("%d", &pos);

    for(i = size; i >= pos; i--){

        arr[i] = arr[i-1];
    }
    arr[pos-1] = n;

    printf("Modified array: ");
    
    for(i = 0; i < size+1; i++){
        printf("%d " , arr[i]);
    }
}