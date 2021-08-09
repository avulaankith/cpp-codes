

// This program takes a number as input and iterates to calculate sum of its digits until the sum reaches to a single digit.

#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int mai(int n)
{
    int s;
    if (n <= 9)
    {
        return n;
    }
    s = sum(n);
    while (s > 9)
    {
        s = sum(s);
    }
    return s;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int res = mai(n);
    cout << res << endl;
    return 0;
}
