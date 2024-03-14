package SortingAlgorithm;


public class SelectionSort {
    static void swap(int[] arr, int a, int b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    static void selection_sort(int[] arr){
        int n = arr.length;

        for(int i = 0; i < n - 1; i++){
            int min_index = i;
            for(int j = i + 1; j < n ; j++){
                if(arr[j] < arr[min_index]){
                    min_index = j;

                }
            }
            swap(arr, i, min_index);
        }
    }


    public static void main(String[] args) {

        int[] array = {1, 6 , 4, 2, 3, 7, 5};

        selection_sort(array);

        for(int i = 0; i < array.length; i++){
            System.out.print(array[i] + " ");
        }

    }
}
