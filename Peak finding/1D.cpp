#include <iostream>

using namespace std;

//Given a array of numbers, a peak exists if at some array[n] :
//          array[n] >= array[n-1] && array[n] >= array[n+1]

//Functions

int findPeak(int arr[], int l, int r, int n){
    
    int m = (l + r)/2;

    if((m == (n - 1) ||arr[m] >= arr[m+1]) && (m == 0 || arr[m] >= arr[m-1])){
    
        return m;
    
    }else if(arr[m] >= arr[m-1]){
    
        return findPeak(arr,m+1,r, n);
    
    }else{

        return findPeak(arr,l, m-1, n);
    
    }

}

void printArr(int *v, int n){
    bool last = false;
    for(int i = 0; i < n; i++){

        if(i == 0){
            cout << "{";
        }
        if(i == n - 1){
            cout << " " << v[i] << "}" << "\n";
            last = true;
        }
        if(!last){
            cout << " " << v[i] << ",";
        }
         
    }
}

int main(){

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = (sizeof(arr)/sizeof(arr[0])), peak, position;

    position = findPeak(arr,0,n - 1, n); 
    
    cout << "The array analyzed was: ";
    printArr(arr, n);
    cout << "The peak is: " << arr[position] << ", and it's at position: " << position << endl;

}