#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; // Enter No. of rows and columns
    int row = 1;
    char ch='A';
    while (row <= n)
    {
        int col = 1;
       
        while (col <= n)
        {
            char ch = 'A'+ row-1  ; 
            cout << ch;
            col += 1;
        }
        //ch='A'+row; // or you can add this at the end .
        cout << endl;
        row += 1;
    }
}