#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    std::vector<int> myVector = {1,2,1,3,5,6,4};
    vector<int> tVector(myVector);

    std::sort(myVector.begin(), myVector.end());
    int maxElement = myVector.back();

    for (size_t i = 0; i < tVector.size(); i++) {
        if (tVector[i] == maxElement) {
            std::cout << i << " ";
        }
    }

    return 0;
}
