#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotateMatrixInPlace(const vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> rotatedMatrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rotatedMatrix[j][n - i - 1] = matrix[i][j];
        }
    }

    return rotatedMatrix;
}

void printMatrix(const vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    vector<vector<int>> rotatedMatrix = rotateMatrixInPlace(matrix);

    cout << "Rotated Matrix:" << endl;
    printMatrix(rotatedMatrix);

    return 0;
}
