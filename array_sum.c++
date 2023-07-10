#include <iostream>
using namespace std;

int main()
{
    int k;
    cout<<"Enter a Numeber : ";
    cin>>k;
    int arr1[5] = {4, 5, 9, 6};
    int arr2[5] = {7, 9, 3, 5};
    
    for (int i = 0; i < 4; i++)
    {
        int c = arr1[i];
        for (int j = 0; j < 4; j++)
        {
            int l = c + arr2[j];
            if (l == k)
            {
                cout << i << " " << j << endl;
                goto exitLoops; /* new term */
            }
        }
    }
    
    exitLoops:
    return 0;
}

/* In this code, when a match is found, 
the program uses the goto statement to jump to the exitLoops label, 
effectively skipping the remaining iterations of both loops and terminating the program.
 This way, only the first set of indices that satisfy 
 the condition is printed. However, it's worth mentioning that 
 the use of goto is generally discouraged as it can make 
 the code harder to read and understand. 
 It's considered a good practice to use structured control flow instead.
*/