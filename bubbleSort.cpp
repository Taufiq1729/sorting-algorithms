#include <iostream>
using namespace std;

int* bubble_Sort(int v[],int vsize) {
    for (int i = 0; i < vsize; i++) {
        int swapped = 1;
        for (int j = 0; j < vsize - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapped = 1;
            }
            if (!swapped)
                break;
        }
    }
    return v;
}
int main() {
    int v[]={1,4,2,7,8,21,2};
    int *a=bubble_Sort(v,7);
    for(int i=0;i<7;i++) {
        cout << a[i] <<" ";
    }
}