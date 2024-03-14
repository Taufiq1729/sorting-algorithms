#include<stdio.h>


void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void selection_sort(int arr[], int n){


    for(int i = 0; i < n - 1; i++){

        int min_index = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_index]){
                
                min_index = j;
            }
        }
        swap(arr, i , min_index);
    }


}


int main(){
    int array[] = {9, 1, 5, 2, 3};

    int n = sizeof(array) / sizeof(array[0]);

    selection_sort(array, n);

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }

    printf("\n");
}