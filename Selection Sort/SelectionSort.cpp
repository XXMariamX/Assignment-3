//2) Implement Selection sort algorithm, void selectionSort(std::vector<int>& arr).

#include<iostream>
#include<vector>
using namespace std;

void selectionSort(std::vector<int>& arr) {
    int minVal, minInd;
    for (int i = 0; i < arr.size() - 1; i++) {
        minVal = arr[i];
        minInd = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < minVal) {
                minVal = arr[j];
                minInd = j;
            }
        }
        if (i != minInd) {
            arr[minInd] = arr[i];
            arr[i] = minVal;
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
    vector<int>v{ 10,8,5,4,3,2,1 };
    selectionSort(v);
    printVec(v);
}
