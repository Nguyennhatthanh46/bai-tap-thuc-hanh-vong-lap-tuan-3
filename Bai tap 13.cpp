#include <iostream>

using namespace std;
int main() {
int a, b;
cin >> a >> b;
while(b!=0) {
int R = b;
b = a % b;
a = R;
}cout << a;
}
