#include <iostream>
using namespace std;

// Recursive function to reverse string
string reverseString(string s) {
    if (s.length() == 0)
        return "";
    return reverseString(s.substr(1)) + s[0];
}

int main() {
    string s;

    //taking input
    cin >> s;   // for single word input
    //cin.ignore();
    //getline(cin,s);
    // calling function
    
    string result = reverseString(s);

    // printing output
    cout << "Reversed string: " << result << endl;

    return 0;
}