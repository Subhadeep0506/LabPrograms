#include <stdio.h>

void main() {

    int size = 0 ;
    int arr[50];
    int i , pos = 0;
    int small ;

    printf("Enter the no. of elements you want to give: ");
    scanf("%d" , &size);
    printf("Enter the elements now: \n");
    
    for(i = 0 ; i<size ; i++){

        scanf("%d" , &arr[i]);
    }
    small = arr[0];
    for(i = 0 ; i < size ; i++){
        if(arr[i] < small){
            pos = i;
            small = arr[i];
        }
    }

    printf("Smallest element in the array: %d ", small);
    printf("; At position: %d",pos+1);
    
}