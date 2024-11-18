#include <iostream>

using namespace std;

int main() { 
    long long n, m; 
    cin >> n >> m;

    cout << (m - 1) * m / 2 + (n - 2) * (n - 1) / 2 - (n - m - 1) * (n - m) / 2;
}
