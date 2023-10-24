#include<iostream>
#include<string>
#include<cstdlib>
#include<cctype>

using namespace std;

string caesar(int k, string plaintext);

int main(int argc, char* argv[])
{
        int k;
        string text;
        if (argc != 2)
        {
                cout<<"Usage:./caesar k\n";
                return 3;
                exit(EXIT_FAILURE);
        }
        k = atoi(argv[1]);
        cout<<"Plaintext:";
        getline(cin, text);

        string ciphertext = caesar(k, text);
        cout<<"Ciphertext:"<<ciphertext<<endl;
        return 0;
}
string caesar(int k, string plaintext)
{
        int ascii = 0;
        int diff;
        if (isupper(plaintext[i]))
        {
                ascii = 65;
        }
        els if(islower(plaintext[i]))
        {
                ascii = 97;
        }
        else if(!isupper(plaintext[i]) && !islower(plaintext[i]))
        {
                continue;
        }
        diff = (plaintext[i])
}