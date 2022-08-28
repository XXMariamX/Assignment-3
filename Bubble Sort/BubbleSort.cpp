//1) Implement Bubble sort algorithm, void bubbleSort(std::vector<int>& arr).


#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(std::vector<int>& arr) {
    int temp;
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printVec(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int>v{ 10,8,5,3,2,1 };
    bubbleSort(v);
    printVec(v);
}

