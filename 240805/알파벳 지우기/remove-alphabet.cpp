#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    int result = 0;
    regex re("[a-z]+");

    for (int i = 0; i < 2; i++)
    {
        string sInput;
        cin >> sInput;
        sInput = regex_replace(sInput, re, "");
        result += stoi(sInput);
    }

    cout << result;
    return 0;
}