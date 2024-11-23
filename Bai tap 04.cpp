/*
Viết chương trình kiểm tra một số có phải là số nguyên tố hay không.
Số nguyên tố là số tự nhiên chỉ có duy nhất 2 ước nguyên dương phân biệt là 1 và chính nó, tức là nó chỉ chia hết cho 1 và chính nó. Những số có từ 2 ước số trở lên sẽ được gọi là hợp số.

Một trường hợp vừa không phải là số nguyên tố, vừa không phải hợp số chính là 1, khi nó chỉ có duy nhất một ước là chính nó.
Input:
- Một số nguyên dương n.
Output:
- Trả về 0 nếu n là số hợp thành.
- Trả về 1 nếu n là số nguyên tố.
- Trả về -1 nếu n không phải là số nguyên tố, cũng không phải là hợp số.
VÍ DỤ
INPUT                  OUTPUT
----------------------------------
9                      0
__________________________________
71                     1
__________________________________
97                     1

*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    unsigned int n;
    cin >> n;

    if (n < 2) {
        cout << -1;
    } else {
        bool kiemtra = true;
        for (int i = 2; i <= sqrt(n); i++) { 
            if (n % i == 0) {
                kiemtra = false;
                break;
            }
        }
        
        if (kiemtra) {
            cout << 1; 
        } else {
            cout << 0; 
        }
    }

    return 0;
}
