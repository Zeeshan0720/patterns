#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << ("Enter n: ");
    cin >> (n);
    for (int i = 0; i < n; i++)
    {
        cout<<"* ";
    }
    cout << ("\n");
        for (int i = 0; i <=n/2; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ("  ");
        }
        for (int k = 0; k < n-2*i; k++)
        {
             if(k==0||k==n-2*i-1)
                cout<< ("* ");
            else
                 cout << ("  ");
        }
        cout << ("\n");
    }
       for (int i = n/2-1; i >=0; i--)
    {
        for (int j =0; j < i; j++)
        {
            cout << ("  ");
        }
        for (int k = 0; k <n-2*i; k++)
        {
            if(k==0||k==n-2*i-1)
                cout<< ("* ");
            else
                 cout << ("  ");
        }
        cout << ("\n");
    }
     for (int i = n-1; i >=0; i--)
    {
        cout<<"* ";
    }
}