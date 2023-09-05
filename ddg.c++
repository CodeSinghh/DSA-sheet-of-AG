#include <iostream>
#include <string>
#include <algorithm> // for std::reverse
using namespace std;

int main()
{
    int count = 0;
    string text = "1231";
    string goi = text;
    char characterToFind = '1'; // Use char instead of string

    // Count the occurrences of '3' in the string
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == characterToFind)
        {
            count = count + 1;
        }
    }

    if (count > 1)
    {
        int foundPos = text.find_first_of(characterToFind);

        // Remove the first occurrence of '3'
        if (foundPos != string::npos)
        {
            text.erase(foundPos, 1);
        }

        // Reverse the string
        reverse(goi.begin(), goi.end());

        // Remove the first occurrence of '3' again
        foundPos = goi.find_first_of(characterToFind);
        if (foundPos != string::npos)
        {
            goi.erase(foundPos, 1);
            reverse(goi.begin(), goi.end());
        }

        // Convert the modified strings to integers
        int num1 = stoi(text); // The reversed string

        int num2 = stoi(goi); // The reversed string after the second removal

        // Print the larger of the two numbers
        if ((num1 > num2) || (num1 == num2))
        {
            cout << num1 << " ";
        }
        else
        {
            cout << num2 << " ";
        }
    }
    else
    {
        int foundPos = text.find_first_of(characterToFind);

        // Remove the first occurrence of '3'
        if (foundPos != string::npos)
        {
            text.erase(foundPos, 1);
        }

        cout << text << endl;
    }

    return 0;
}
