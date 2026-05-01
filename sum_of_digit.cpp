#include <iostream>
using namespace std;

// Recursive function
int sum_digit(int n)
{
    if(n == 0)
        return 0;
    int x = n % 10;
    return x + sum_digit(n/10);
}

int main() {
    int n;
    cin >> n;

    int result = sum_digit(n);
    cout << result << '\n';
    return 0;
}