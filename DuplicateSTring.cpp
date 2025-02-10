#include <iostream>
#include <unordered_set>
using namespace std;

string findDuplicateChar(string str)
{
    int freq[256] = { 0 };
    string result = "";
    unordered_set<char> added;

    for (char ch : str)
    {
        freq[ch]++;
    }

    for (char ch : str) {
        if (freq[ch] > 1 && added.find(ch) == added.end()) {
            result += ch;
            added.insert(ch);
        }
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string duplicates = findDuplicateChar(str);
    cout << "Duplicate characters: \"" << duplicates << "\"" << endl;

    return 0;
}
