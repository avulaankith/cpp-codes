#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    if (a > b)
    {
        return gcd(b, a % b);
    }
    else
    {
        return gcd(a, b % a);
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int _ = 0; _ < t; _++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int gc = gcd(arr[0], arr[1]);
        for (int i = 2; i < n; i++)
        {
            gc = gcd(gc, arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] / gc;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
