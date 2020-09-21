#include<stdio.h>

void main(){
    //Your code here
    int arr[50];
    int pos = 0;
    int flag = 0;
    int i = 0;
    int searchElem , size;

    printf("Enter the no. of elements you want to give: ");
    scanf("%d" , &size);
    printf("Enter the elements now: \n");
    
    for(i = 0 ; i<size ; i++){

        scanf("%d" , &arr[i]);
    }

    printf("Enter the element you are searching for: ");
    scanf("%d" , &searchElem);

    for(i = 0 ; i < 11 ; i+=1){

        if(searchElem == arr[i]){

            pos = i;
            flag = 1;
            break;
        }
    }

    if (flag == 1){
        printf("Element found at position %d" , (pos+1));
    }                       
    else
    {
        printf("Element NOT found");
    }
        
}