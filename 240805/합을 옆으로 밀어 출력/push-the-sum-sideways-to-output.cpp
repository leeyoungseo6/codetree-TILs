#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, result = 0, digit = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        result += input;
    }

    string resultS = to_string(result);
    cout << resultS.substr(1, resultS.size()) << resultS[0];
    return 0;
}