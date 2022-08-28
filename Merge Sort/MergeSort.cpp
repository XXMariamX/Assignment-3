//5) Implement Merge sort algorithm, void mergeSort(std::vector<int>& arr).


#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& v1, vector<int>& v2,vector<int>& sorted) {
    int x = 0; int y = 0; int i = 0;
    while (x != v1.size() &&y != v2.size()) {
        if (v1[x] < v2[y]) {
            sorted[i]=v1[x];
            x++;
            i++;
        }
        else {
            sorted[i]=v2[y];
            y++;
            i++;
        }
    }
    if (y != v2.size()) {
        while (y != v2.size()) {
            sorted[i]=v2[y];
            y++;
            i++;
        }
    }
    if (x != v1.size()) {
        while (x!=v1.size()) {
            sorted[i]=v1[x];
            x++;
            i++;
        }
    }

}

void mergeSort(std::vector<int>& arr) {
    vector<int>v1, v2;
    int size = arr.size();
    if (size> 1) {
        v1 = { arr.begin(), arr.begin() + size / 2  };
        mergeSort(v1);
        v2 = { arr.begin() + size / 2  ,arr.end() };
        mergeSort(v2);
        merge(v1, v2,arr);
    }

}
void print(vector<int>v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v{ 38,16,27,39,12,27 };
    mergeSort(v);
    print(v);

    vector<int> v2{ 75,55,15,20,85,30,35,10,60,40,50,25,45,80,70,65 };
    mergeSort(v2);
    print(v2);
}



