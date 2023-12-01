#include <iostream>
using namespace std;

string encrypt(string text, int s)
{
    string result = "";
    for (int i = 0; i < text.length(); i++)
    {
        char ch = text[i];
        if (isalpha(ch))
        {
            if (isupper(ch))
                result += char(((int(ch - 65) + s) % 26) + 65);
            else
                result += char(((int(ch - 97) + s) % 26) + 97);
        }
        else
        {
            result += ch;
        }
    }
    cout << "Encrypted text is " << result << endl;
    return result;
}

string decrypt(string text, int k)
{
    string result = "";
    for (int i = 0; i < text.length(); i++)
    {
        char ch = text[i];
        if (isalpha(ch))
        {
            if (isupper(ch))
                result += char(((int(ch - 65) - k + 26) % 26) + 65);
            else
                result += char(((int(ch - 97) - k + 26) % 26) + 97);
        }
        else
        {
            result += ch;
        }
    }
    cout << "Decrypted text is " << result << endl;
    return result;
}

int main()
{
    string text;
    int k;
    cout << "This is Caesar cipher encryption" << endl;
    cout << "Enter the text to be encrypted: ";
    cin >> text;
    cout << "Enter the key to be decrypted: ";
    cin >> k;
    string encryptedText = encrypt(text, k);
    decrypt(encryptedText, k);
    return 0;
}
