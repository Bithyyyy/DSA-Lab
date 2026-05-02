#include <iostream>
using namespace std;

// Recursive function
int countEven (int A [] , int n ) {
    if ( n == 0)
        return 0;
    if ( A [n -1] % 2 == 0)
        return 1 + countEven (A , n -1) ;
    else
        return countEven (A , n -1) ;

}

int main() {
     int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int res = countEven(a,n);
    cout << res << '\n';
    return 0;
}