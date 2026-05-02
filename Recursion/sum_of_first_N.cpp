#include <iostream>
using namespace std;

// Recursive function
int sum_N(int n)
{
    if(n == 0)
        return 0;
    
    return n+ sum_N(n-1);
}

int main() {
    int n;
    cin >> n;

    int result = sum_N(n);
    cout << result << '\n';
    return 0;
}