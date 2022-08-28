//3) Implement Insertion sort algorithm, void insertionSort(std::vector<int>& arr)


#include<iostream>
#include<vector>
using namespace std;
void insertionSort(std::vector<int>& arr) {
    int ind, temp;
    for (int i = 1; i < arr.size(); i++) {
        temp = arr[i];
        ind = i;
        while (ind - 1 >= 0 && arr[ind - 1] > temp) {
            arr[ind] = arr[ind - 1];
            ind--;
        }
        arr[ind] = temp;
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
    insertionSort(v);
    printVec(v);
}
