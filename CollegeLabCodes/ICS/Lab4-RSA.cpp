#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int modInverse(int a, int m)
{
    for (int x = 1; x < m; x++)
    {
        if ((a % m * x % m) % m == 1)
            return x;
    }
    return -1;
}

int modPow(int base, int exponent, int modulus)
{
    int result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
        {
            result = (result * base) % modulus;
        }
        base = (base * base) % modulus;
        exponent /= 2;
    }
    return result;
}

int main()
{
    int p, q, e;
    cout << "Enter the value of p : ";
    cin >> p;
    cout << "Enter the value of q : ";
    cin >> q;
    cout << "Enter the value of e : ";
    cin >> e;

    int n = p * q;
    int phi = (p - 1) * (q - 1);

    if (gcd(e, phi) != 1)
    {
        cerr << "Error: 'e' is not relatively prime to phi(n)" << endl;
        return 1;
    }

    int d = modInverse(e, phi);
    int plaintext;

    cout << "Enter a number to encrypt: ";
    cin >> plaintext;

    int ciphertext = modPow(plaintext, e, n);
    int decryptedtext = modPow(ciphertext, d, n);

    cout << "value of D: " << d << endl;
    cout << "plaintext: " << plaintext << endl;
    cout << "encrypted text: " << ciphertext << endl;
    cout << "decrypted: " << decryptedtext << endl;

    return 0;
}
