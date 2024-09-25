#include <iostream>
#include <vector>
using namespace std;

// Write an algorithm that reads a number of integer numbers from the user in any order,
// performs insertion sort on the data and prints out all the sorted data to the screen.

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    cout << "Enter the number of integers: ";
    int num;
    cin >> num;

    vector<int> data(num);
    cout << "Enter " << num << " integers:\n";
    for (int i = 0; i < num; ++i) {
        cin >> data[i];
    }

    insertionSort(data);

    cout << "Sorted data:\n";
    for (int i = 0; i < num; ++i){
        cout << (data[i]) << " ";
    }

    cout << "\n";

    return 0;
}

