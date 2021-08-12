#include <iostream>
using namespace std;

void print_digits(int num)
{
    if (num < 10)
    {
        cout << num << endl;
    }
    else
    {
        print_digits(num / 10);
        cout << num % 10 << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the desired number: ";
    cin >> n;
    print_digits(n);
    return 0;
}
