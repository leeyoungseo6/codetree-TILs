#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    int result = 0;
    regex re("\\d+");
    smatch match;

    for (int i = 0; i < 2; i++)
    {
        string sInput;
        cin >> sInput;

        string sResult = "";
        while (regex_search(sInput, match, re))
        {
            sResult += match.str();
            sInput = match.suffix();
        }

        result += stoi(sResult);
    }

    cout << result;
    return 0;
}