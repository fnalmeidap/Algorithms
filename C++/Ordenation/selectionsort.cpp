#include<bits/stdc++.h>

using namespace std;

// selection sort considering only unique values, no optimizations
vector<int> selectionSort(){
	
	vector<int> array;
	vector<int> orderedArray;
	
	int n, input;
	cin >> n;

	for(int i = 0; i < n; ++i) {
		cin >> input;
		array.push_back(input);
	}
	
	int lowestIndex;
	int lowestValue;

	while(orderedArray.size() < n){
		lowestValue = INT_MAX;

		for(int i = 0; i < array.size(); ++i) {
			if(array[i] < lowestValue){
				lowestIndex = i;
				lowestValue = array[i];
			}
		}
		orderedArray.push_back(lowestValue);
		array.erase(array.begin() + lowestIndex);
	}

	return orderedArray;

}

