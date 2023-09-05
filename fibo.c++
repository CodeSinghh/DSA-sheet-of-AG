#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    int c, k;
    vector<int> abValues;
    int n;
    cout << "Enter the Number of Elements : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Perform addition of 'a' and 'b'
        c = a + b;
        k = c;

        // Push the value of 'a' into the 'abValues' vector
        abValues.push_back(a);

        // Push the value of 'b' into the 'abValues' vector
        abValues.push_back(b);

        // Update 'a' with the value of 'c'
        a = c;

        // Perform addition of 'b' and 'k'
        c = b + k;
        k = c;

        // Update 'b' with the value of 'k'
        b = k;
    }

    // Print exactly the first 5 elements of the 'abValues' vector
    cout << "Fibonacci of first 5 elements : ";
    for (int i = 0; i < n; i++)
    {
        cout << abValues[i] << " ";
    }
    cout << endl;

    return 0;
}
