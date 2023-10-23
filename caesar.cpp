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
        }
}