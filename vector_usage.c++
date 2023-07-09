#include <iostream>
#include <vector>

void vectorOperations() {
    std::vector<int> myVector;

    // Add elements to the vector using push_back()
    myVector.push_back(5);
    myVector.push_back(2);
    myVector.push_back(7);
    myVector.push_back(1);
    myVector.push_back(4);

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Remove the last element using pop_back()
    myVector.pop_back();

    // Print the vector after removing the last element
    std::cout << "Vector after pop_back(): ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Check if the vector is empty using empty()
    if (myVector.empty()) {
        std::cout << "Vector is empty" << std::endl;
    } else {
        std::cout << "Vector is not empty" << std::endl;
    }

    // Access elements using at()
    std::cout << "First element: " << myVector.at(0) << std::endl;
    std::cout << "Last element: " << myVector.back() << std::endl;

    // Insert an element at a specified position using insert()
    myVector.insert(myVector.begin() + 2, 10);

    // Print the vector after inserting an element
    std::cout << "Vector after insert(): ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Erase elements in a range using erase()
    myVector.erase(myVector.begin() + 1, myVector.begin() + 3);

    // Print the vector after erasing elements
    std::cout << "Vector after erase(): ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Change the size of the vector using resize()
    myVector.resize(3);

    // Print the vector after resizing
    std::cout << "Vector after resize(): ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Swap the contents of two vectors using swap()
    std::vector<int> anotherVector {100, 200, 300};
    myVector.swap(anotherVector);

    // Print the vectors after swapping
    std::cout << "myVector after swap(): ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    std::cout << "anotherVector after swap(): ";
    for (const auto& element : anotherVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Request a specific capacity using reserve()
    myVector.reserve(10);

    // Print the capacity of the vector using capacity()
    std::cout << "Capacity of myVector: " << myVector.capacity() << std::endl;

    // Replace the contents of the vector using assign()
    myVector.assign({9, 8, 7, 6});

    // Print the vector after assigning new values
    std::cout << "Vector after assign(): ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    vectorOperations();

    return 0;
}
