#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> vec, int left, int right, int pivot){
    while (left <= right){
        while(array[left] < pivot){
            left++;
        }
        while(array[right] > pivot){
            right--;
        }

        if(left <= right){
            swap(array, left, right);
            left++;
            right--;
        }
    }
    return left;
}

int * qs(vector<int> vec, int left, int right){
    if (left >= right){
        return
    }

    int pivot = vec[(left + right) / 2];
    
    int index = partition(array, left, right, pivot);
    qs(array, left, index - 1);
    qs(array,index,right);
}

int main(){

    return 0;
}