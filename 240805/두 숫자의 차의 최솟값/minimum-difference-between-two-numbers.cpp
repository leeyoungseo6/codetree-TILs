#include <iostream>
using namespace std;

int main()
{
    int n, prev, min = 100;
    cin >> n >> prev;
    for (int i = 1; i < n; i++)
    {
        int input;
        cin >> input;

        if (input - prev < min)
            min = input - prev;

        prev = input;
    }

    cout << min;
    return 0;
}