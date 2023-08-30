#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> bas;
    vector<int> bass;
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    int splitIndex = 3;



    for (int i = 0; i < splitIndex; ++i) {
        bas.push_back(myArray[i]);
    }
    reverse(bas.begin(), bas.end());


    for (int i = splitIndex; i < arraySize; ++i) {
        bass.push_back(myArray[i]);
    }
    reverse(bass.begin(), bass.end());


    vector<int> result(bas.size() + bass.size());


    merge(bas.begin(), bas.end(), bass.begin(), bass.end(), result.begin());


    cout << "Merged Vector: ";
    for (const auto& num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
