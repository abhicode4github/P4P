#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(std::cin, input);

    // Define an array to store the frequency of each alphabet
    int frequency[26] = {0}; // Initialize with zeros

    // Iterate through the string and count the frequency of each alphabet
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if (isalpha(c)) {
            // Convert the character to lowercase to make it case-insensitive
            c = tolower(c);
            // Increment the frequency count for the corresponding alphabet
            frequency[c - 'a']++;
        }
    }

    // Display the frequency of each alphabet
    cout << "Alphabet frequencies:\n";
    for (int i = 0; i < 26; i++) {
        char alphabet = 'a' + i;
        if (frequency[i] > 0) {
            cout << alphabet << ": " << frequency[i] << " times\n";
        }
    }

    return 0;
}
