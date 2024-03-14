function bubbleSort(arr) {
    for (let i = 0; i < arr.length - 1; i++) {
        let swapped = false;
        for (let j = 0; j < arr.length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
                swapped = true;
            }
        }
        if (!swapped) {
            return;
        }
    }
}

let array = [5, 1, 3, 9, 4];
bubbleSort(array);
for (let i = 0; i < array.length; i++) {
    process.stdout.write(array[i] + " ");
}