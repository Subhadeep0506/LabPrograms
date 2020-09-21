#include<stdio.h>

void main(){
    //Your code here
    int arr[50];
    int mid , high, low = 0;
    int flag = 0;
    int searchElem , pos = 0 , size , i;

    printf("Enter the no. of elements you want to give: ");
    scanf("%d" , &size);
    printf("Enter the elements now: \n");
    
    for(i = 0 ; i<size ; i++){

        scanf("%d" , &arr[i]);
    }

    printf("Enter the element you are searching for: ");
    scanf("%d" , &searchElem);
    high = size - 1;
    
    while(low <= high){

        mid = (low+high) / 2;
        if(searchElem == arr[mid]){

            flag = 1;
            pos = mid;
            break;
        }
        else{
            if(searchElem > arr[mid] ){
                low = mid + 1 ;
            }
            else{
                high = mid - 1;
            }
        }
    }
    if(flag == 1){
        printf("Element found at position: %d" , (pos + 1));
    }
    else{
        printf("Element NOT found");
    }
    
}