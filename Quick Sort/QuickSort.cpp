//4) Implement Quick sort algorithm, void quickSort(std::vector<int>& arr).

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

void part(vector<int>& arr, int  first, int last) {
    if (first == last)return;
    int pivot = first;//index
    int left = first + 1;
    int right = last;

    if (last - first == 1) {
        if (arr[first] > arr[last])swap(arr[first], arr[last]);
        return;
    }

    while (left < right) {
        while (left < arr.size() - 1 && arr[left] <= arr[pivot]) {//catch int >pivot
            left++;
        }
        while (right > 1 && arr[right] > arr[pivot]) {//catch int<pivot
            right--;
        }
        //pivot = right;
        if (left == right == first + 1) {
            part(arr, left, last);
        }
        else if (left == right == last) {
            swap(arr[pivot], arr[left]);/* pivot = arr.size() - 1;*/
            part(arr, first, last - 1);
        }
        else if (right < left) {
            swap(arr[right], arr[pivot]); pivot = right;
            part(arr, first, pivot - 1);
            part(arr, pivot + 1, last);
        }
        else swap(arr[left], arr[right]);
        cout << "";
    }
}

void quickSort(std::vector<int>& arr) {
    part(arr, 0, arr.size() - 1);
}

int main()
{
    vector<int> v{ 54,26,93,17,77,31,44,55,20 };
    quickSort(v);
    print(v);
}


