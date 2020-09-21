//Sorting using Bubble Sort Method
#include<stdio.h>

int main(){
    //Your code here
    int arr[50];
    int size, i, j, temp; 

    printf("Enter the number of elements you want to insert: ");
    scanf("%d", &size);

    printf("Now enter the elements: \n");
    for(i = 0; i < size; i++){

        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size - 1; i+=1){

        for(j = 0; j < size - i - 1; j+=1){

            if(arr[j] > arr[j+1]){

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    
    for(i = 0; i < size; i++){
        printf("%d " , arr[i]);
    }
    return 0;
}