#include<stdio.h>

int main(){
    //Your code here
    int arr[50];
    int size, i, pos;

    printf("Enter the number of elements you want to insert: ");
    scanf("%d", &size);

    printf("Now enter the elements: \n");
    for(i = 0; i < size; i++){

        scanf("%d", &arr[i]);
    }

    printf("Enter the position from where you want to delete the element: ");
    scanf("%d", &pos);

    for(i = pos-1; i < size; i++){

        arr[i] = arr[i + 1];
    }

    printf("Modified array: ");
    
    for(i = 0; i < size-1; i++){
        printf("%d " , arr[i]);
    }

    return 0;
}