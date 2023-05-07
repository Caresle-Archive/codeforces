#include <iostream>
#include <set>
using namespace std;

int main() {
    int a, b, c, d, s;
    cin >> a >> b >> c >> d;
    set<int> numbers({ a, b, c, d });
    cout << 4 - numbers.size() << "\n";
}