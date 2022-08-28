//6) Implement Radix sort algorithm, void radixSort(std::vector<int>& arr).


#include <iostream>
#include <vector>
#include <list>

using namespace std;

void radixSort(std::vector<int>& arr) {
    list <int> l[10];
    int n = 0;
    int cnt=0;
    int ind;
    int x;
    int j;

    while (cnt<arr.size()) {
        cnt = 0;
        for (int i = 0; i < arr.size(); i++) {
            ind = int(arr[i] / (pow(10, n))) % 10;
            if (ind == 0)cnt++;
            l[ind].push_back(arr[i]);
        }
        j = 0;
        for (int i = 0; i < 10; i++) {
            while (!l[i].empty()) {
                arr[j]=(l[i].front());
                l[i].pop_front();
                j++;
            }
        }
        n++;
    }
}

void print(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 

int main()
{
    vector<int> v = {123,2154,222,4,283,1560,1061,2150};
    radixSort(v);
    print(v);

    vector<int> v2 = { 64,8,216,512,27,729,199,550,343,93,666 };
    radixSort(v2);
    print(v2);

}

