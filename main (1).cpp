#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        string a;
        for (int j = 0; j < i; j++) a+='*';
        cout << a << endl;
    }
}