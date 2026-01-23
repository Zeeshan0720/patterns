#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << ("Enter n: ");
    cin >> (n);
        for (int i = 0; i <n; i++)
    {
        for (int j = n-i; j <n; j++)
        {
            cout << (" ");
        }
        for (int k = 2*i-1; k < n+4; k++)
        {
            cout << ("*");
        }
        cout << ("\n");
    }
}