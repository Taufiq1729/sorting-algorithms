#include <iostream>
#include <vector>
using namespace std;

vector<int> bubble_Sort(vector<int> v) {
    
    for (int i = 0; i < v.size(); i++) {
        int swapped = true;
        for (int j = 0; j < v.size() - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
            if (!swapped)
                break;
        }
    }
    return v;
}
int main() {
    vector <int> v={1,4,2,7,8,21,2};
    vector<int> a=bubble_Sort(v);
    for(int i=0;i<v.size();i++) {
        cout << a[i] <<" ";
    }
}
