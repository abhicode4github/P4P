// write a code in c++ , to check if one string is a rotation of another (considering both are of same length) , example , Input:"abcde" , "cdeab" , Output : true
do not use any inbuilt functions.

#include <iostream>
#include <string>
using namespace std;

bool isRotation(const string& s1, const string& s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    
    string concatenated = s1 + s1;
    
    int len = s1.length();
    for (int i = 0; i < len; ++i) {
        bool rotationFound = true;
        for (int j = 0; j < len; ++j) {
            if (concatenated[i + j] != s2[j]) {
                rotationFound = false;
                break;
            }
        }
        if (rotationFound) {
            return true;
        }
    }
    
    return false;
}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    
    if (isRotation(s1, s2)) {
        cout << "Output: true\n";
    } else {
        cout << "Output: false\n";
    }
    
    return 0;
}
