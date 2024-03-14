//Selection Sort
#include <iostream>
using namespace std;

int* selection_Sort(int arr[], int arr_size) {
    for(int i = 0; i < arr_size; i++) {
        int min_index = i;
        for(int j = i+1; j < arr_size; j++)
            if(arr[j] < arr[min_index])
                min_index = j;
        swap(arr[i], arr[min_index]);        
    }
    return arr;
}
int main() {
    int arr[] = {1,4,2,7,8,21,2};
    int *a = selection_Sort(arr, 7);

    for(int i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }
}