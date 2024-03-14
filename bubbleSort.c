#include<stdio.h>

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void bubbleSort(int arr[], int n){

    for(int i = 0; i < n - 1; i++){
        int x = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr, j, j + 1);
                x = 1;
            }
        }
        if(x == 0){
            return;
        }

    }
}


int main(){

    int array[] = { 5, 1, 7, 2, 3};
    bubbleSort(array,5);
    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
}