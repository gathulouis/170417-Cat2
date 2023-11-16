#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Convert the character to lowercase for easy comparison
    char lowercaseCh = tolower(ch);

    // Check if the character is a vowel or a consonant
    if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
        cout << ch << " is a vowel." << endl;
    } else if ((lowercaseCh >= 'a' && lowercaseCh <= 'z') && !((lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u'))) {
        cout << ch << " is a consonant." << endl;
    } else {
        cout << ch << " is not a valid alphabet character." << endl;
    }

    return 0;
}
