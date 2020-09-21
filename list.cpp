#include <iostream>

using namespace std;

void insertionSort(int arr[] , int size);
void arrayInitialize(int arr[] , int size);
int main(){

    int arr[50];
    int size , i;

    cout << "Enter the no. of elements you want to enter: ";
    cin >> size;
    arrayInitialize(arr , size);
    insertionSort(arr , size);

    cout << "Sorted Array: ";
    for(i = 0; i < size; i+=1){

        cout << arr[i] << " ";
    }
    return 0;
}

void insertionSort(int arr[] , int size){

    int i , j , key;
    for(i = 1; i < size ; i += 1){

        key = arr[i];
        j = i - 1;
        while(key < arr[j] && j >= 0){

            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void arrayInitialize(int arr[] , int size){

    cout << "Now enter the elements: ";
    for(int i = 0; i < size ; i+=1){

        cin >> arr[i];
    }
}