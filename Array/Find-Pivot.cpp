#include<iostream>
#include<vector>
using namespace std;

// Find the pivot in a rotated sorted array --->

int findPivot(vector<int> vec){
    int size = vec.size();
    int st = 0, end = size - 1, mid;

    while(st < end){
        mid = st + (end - st)/2;
        if(vec[mid] >= vec[0]){
            st = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return st;
}

int main(){
    vector<int> vec = {7, 9, 11, 3, 4, 5};
    int pivot = findPivot(vec);
    cout << "Pivot Index : " << pivot << endl;
    cout << "Pivot Element : " << vec[pivot] << endl;

    return 0;
}