#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << ("Enter n: ");
    cin >> (n);
        for (int i = (n-1); i >=0; i--)
    {
        for (int j = n-i; j < n; j++)
        {
            cout << (" ");
        }
        for (int j = 2*i; j < n+4; j++)
        {
            cout << ("*");
        }
        cout << ("\n");
    }
}