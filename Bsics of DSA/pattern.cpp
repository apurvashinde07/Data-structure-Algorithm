#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) /// outer loop
    {
        for (int i = 1; i <= n; i++) // inner loop
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++) /// outer loop
    {
        for (int i = 1; i <= n; i++) // inner loop
        {
            cout << i << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int i = 0; i < n; i++)
        {
            cout << ch << " ";
            ch = ch + 1; // ch=65+1=66
        }
        cout << endl;
    }

    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }

    char ch = 'a';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << (i + 1) << " ";
        }
        cout << endl;
    }

    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++; /// move to next letter
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
