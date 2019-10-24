#include <bits/stdc++.h>
#define SIZE 100

using namespace std;


void clrscr(){
    cout << "\033[2J\033[1;1H";
}

int menu(){
    int selection;
    cout << "\n============== BINARY SEARCH ==============\n\n";
    cout << "In this implementation of the algorithm it returns \nthe indice of the value passed by you in the array" << endl;
    cout << "\n* You can either choose to use a default array, aleatory\n generated from 0-99, or create your own array" << endl << endl;
    cout << "==============================================\n\n";
    cout << " Choose what you want to do:\n\n[1] - Use default array\n[2] - Create your own array\n";
    cout << "IMPORTANT: If you choose to create your own array, it must be ascendently sorted!\n";

    cin >> selection;

    if(selection == 1 || selection == 2 || selection == 0){
        return selection;
    }

    while(selection != 1 || selection != 2 || selection != 0){
        clrscr();
        cout << "Value not valid, re-enter or press '0' to exit\n\n";
        cout << "Choose what you want to do:\n\n[1] - Use default array\n[2] - Create your own array\n";
        cin >> selection;
        if(selection == 1 || selection == 2 || selection == 0){
            return selection;
        }
    }
}

void binary_search(int lenght, vector<int> arr){
    int value;
    int ans;
    cout << "\n\n ============== SET UP BINARY SEARCH ==============\n";
    cout << "Which value you want to see the position? ";
    cin >> value;

    // BEGINNING OF THE BINARY SEARCH

    int iterations = 0;
    int m;
    int l = 0;
    int r = lenght;

    while(l <= r){

        iterations++;

        m = (l+r)/2;
        cout << "r: " << r << "\nm: " << m << "\nl: " << l << endl;
        if(value == arr[m]){
            ans = m;
            break;
        }else if(value > arr[m]){
            l = m + 1;
        }else if(value < arr[m]){
            r = m - 1;
        }else{
            ans = -1;
        }

    }
    
    //END OF BINARY SEARCH

    cout << "The value " << value << " is at position: [" << ans << "]\n";
    cout << "Found in: " << iterations << " iterations.";
}

int main(){
    int sel = menu();
    vector<int> arr;
    int res;
    if(sel == 0){
        clrscr();
        cout << "end of program";
        return 0;
    }
    if(sel == 1){
        for(int i = 0; i < SIZE; i++){
            arr.push_back(i);
        }    
        clrscr();

        cout << "This is your array: \n";

        cout << "[";
        for(int k = 0; k < SIZE; k++){
            if(k == SIZE-1){
                cout << arr[k];
            }else{
                cout << arr[k] << " ,";
            }
        }
        cout << "]";

        binary_search(SIZE,arr);
    }else{
        int tam;
        int res;
        clrscr();
        cout << "REMEMBER! THE ARRAY MUST BE SORTED\n";
        cout << "Size of vector: ";
        cin >> tam;

        for(int i = 0; i < tam; i++){
            int elt;
            clrscr();
            cout << "Value at arr[" << i << "]: ";
            cin >> elt;
            arr.push_back(elt);
        }

        clrscr();

        cout << "This is your array: \n";

        cout << "[";
        for(int k = 0; k < tam; k++){
            if(k == tam-1){
                cout << arr[k];
            }else{
                cout << arr[k] << " ,";
            }
        }
        cout << "]";

        binary_search(tam,arr);
    }

    
}