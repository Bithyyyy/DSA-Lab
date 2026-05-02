#include <iostream>
using namespace std;

// Recursive function to check palindrome
bool isPalindrome(string s, int start, int end) {
    if (start >= end)
        return true;

    if (s[start] != s[end])
        return false;

    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    string s;

    // taking input
    cin >> s;   // works for single word

    // function call
    bool result = isPalindrome(s, 0, s.length() - 1);

    // output
    if (result)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}