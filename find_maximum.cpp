#include <iostream>
using namespace std;

int findMax(int A[], int n) {
    if (n == 1)
        return A[0];

    int maxRest = findMax(A, n - 1);

    if (A[n - 1] > maxRest)
        return A[n - 1];
    else
        return maxRest;
}

int main() {
    int n;
    cin >> n;   // take size of array

    int A[1000]; // or dynamically allocate if needed

    for (int i = 0; i < n; i++) {
        cin >> A[i];  // take array input
    }

    int result = findMax(A, n);

    cout << result << endl;  // print maximum value

    return 0;
}