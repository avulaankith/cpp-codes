#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, div, rem, tim;
        cin >> n;
        div = n / 6;
        rem = n % 6;
        if (n <= 6)
        {
            tim = 15;
        }
        else if (rem == 0)
        {
            tim = div * 15;
        }
        else if (rem != 0 and rem <= 2)
        {
            tim = div * 15 + 5;
        }
        else if (rem != 0 and rem <= 4)
        {
            tim = div * 15 + 10;
        }
        else
        {
            tim = (div + 1) * 15;
        }
        cout << tim << endl;
    }
    return 0;
}
