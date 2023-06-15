#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    getline(cin, S);
    string X;
    getline(cin, X);
    int a = X.length();

    size_t pos = S.find("X");
    while (pos != string::npos)
    {
        S.replace(pos, a, "$");
        pos = S.find("X", pos + 1);
    }
    
    cout << S;
    return 0;
}