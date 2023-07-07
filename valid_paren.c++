#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int openCurly = 0, closedCurly = 0;
        int openCircle = 0, closedCircle = 0;
        int openSquare = 0, closedSquare = 0;

        for (char c : s) {
            if (c == '{') {
                openCurly++;
            } else if (c == '}') {
                closedCurly++;
            } else if (c == '(') {
                openCircle++;
            } else if (c == ')') {
                closedCircle++;
            } else if (c == '[') {
                openSquare++;
            } else if (c == ']') {
                closedSquare++;
            }
        }

        return (openCurly == closedCurly && openCircle == closedCircle && openSquare == closedSquare);
    }
};

int main() {
    Solution solution;
    string input;
    cout << "Enter a string of brackets: ";
    cin >> input;

    if (solution.isValid(input)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
