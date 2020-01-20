#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void showMatrix(int m[][4], int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j <  c; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int findMaxIndex(int arr[], int n){
    int max = 0, max_index;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i]; //not used
            max_index = i;
        }
    }

    return max_index;
}


int find2DPeak(int mat[][4], int r, int c, int mid, int n){
    
    int max = 0;
    int mc = mid; //choosing the middle column
    int currColumn[n], max_row, max_col;

    for(int i = 0; i < n; i++){
        currColumn[i] = mat[i][mc]; //creating a vector with the middle column
    }

    max_row = findMaxIndex(currColumn, n); 
    max_col = mc;

    if((max_col == 0 || mat[max_row][max_col] >= mat[max_row][max_col - 1]) && (max_col == n - 1 || mat[max_row][max_col] >= mat[max_row][max_col + 1])){
        max = mat[max_row][max_col];
        return max;
    }
    if(mat[max_row][max_col] >= mat[max_row][max_col - 1]){
        return find2DPeak(mat, r, c, mid + ceil((double)mid/2), n);
    }else{
        return find2DPeak(mat, r, c, mid - ceil((double)mid/2), n);
    }

}

int main(){

    int mat[4][4]  ={{10, 8, 10, 10},{14, 13, 12, 11},{15, 9, 11, 21},{16, 17, 19, 20}};
    int rows = 4, columns = 4, ans;

    ans = find2DPeak(mat, rows, columns, columns/2, columns);

    cout << ans;



}