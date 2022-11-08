template <typename T>
void printHashTable(T hashTable) {
    for(auto element : hashTable){
        cout << "key: " << element.first << "\n";
        cout << "value: " << element.second << "\n";
    }
}

template <typename T>
void printVector(T vector){
    for(int i = 0; i < vector.size(); ++i){
        cout << "[" << i << "]: " << vector[i] << "\n";
    }
}