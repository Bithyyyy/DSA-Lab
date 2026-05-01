#include <iostream>
using namespace std;

// Recursive function
void print_array(int a[],int n)
{
    if(n == 0)
        return;
    
    print_array(a,n-1);
    cout << a[n-1] << " ";
    
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    print_array(a,n);
    return 0;
}