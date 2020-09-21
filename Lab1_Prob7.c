//Sorting using Selection Sort Method
#include<stdio.h>

int main(){
    //Your code here
    int arr[50];
    int size, i, j, temp, small;

    printf("Enter the number of elements you want to insert: ");
    scanf("%d", &size);

    printf("Now enter the elements: \n");
    for(i = 0; i < size; i++){

        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i+=1){

        small = i;
        for(j = i+1; j < size; j++){

            if(arr[j] < arr[small]){

                small = j; 
            } 
        }
        temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array: ");
    
    for(i = 0; i < size; i++){
        printf("%d " , arr[i]);
    }
    return 0;
}
