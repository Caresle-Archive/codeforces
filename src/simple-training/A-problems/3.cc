#include <iostream>
#include <set>

using namespace std;

int main() {
    string u;
    cin >> u;
    set<char> c;

    for (int i = 0; i < u.length(); i++)
        c.insert(u[i]);

    if (c.size() % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
}