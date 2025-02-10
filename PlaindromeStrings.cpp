#include <iostream>
#include <unordered_set>
using namespace std;

bool checkPlaindrome(string str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
    {
        // cout << "Comparing : " << str[i] << " " << str[n-1-i] << endl;
        if (str[i] != str[n - 1 - i])
        {
            return 0;
        }
    }

    return 1;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool isPalindrome = checkPlaindrome(str);
    if (isPalindrome)
        cout << "String is Plaindrome";
    else
        cout << "String is not Plaindrome.";

    return 0;
}
