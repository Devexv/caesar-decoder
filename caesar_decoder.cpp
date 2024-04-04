#include <iostream>
#include <string>

using namespace std;

string decryptCaesarCipher(string ciphertext, int shift) {
    string plaintext = "";
    for (char& c : ciphertext) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = base + (c - base - shift + 26) % 26;
        }
        plaintext += c;
    }
    return plaintext;
}

int main() {
    string ciphertext;
    int shift;

    // Input ciphertext and shift value
    cout << "Enter the ciphertext: ";
    getline(cin, ciphertext);
    cout << "Enter the shift value: ";
    cin >> shift;

    // Decrypt the ciphertext
    string plaintext = decryptCaesarCipher(ciphertext, shift);

    // Output the decrypted plaintext
    cout << "Decrypted plaintext: " << plaintext << endl;

    return 0;
}
