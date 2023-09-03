#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;
int main()
{
    vector<int> arret;
    int arr[6] = {0, 2, 1, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[arr[i]] << " ";
    }
    cout << endl;
}