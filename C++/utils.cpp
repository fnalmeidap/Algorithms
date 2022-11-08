template <typename T>
void printHashTable(T hashTable) {
    for(auto element : hashTable){
        cout << "key: " << element.first << "\n";
        cout << "value: " << element.second << "\n";
    }
}