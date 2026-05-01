#include <iostream>
using namespace std;

// Recursive function
int power(int a, int b) {
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main() {
    int a, b;

    // taking input
    cin >> a;
    cin >> b;

    // calling function and printing output
    int result = power(a, b);

    cout << "Result: " << result << endl;

    return 0;
}