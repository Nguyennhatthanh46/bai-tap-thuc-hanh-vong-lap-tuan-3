/*
Viết chương trình tính tổng các ước số của một số nguyên dương.

INPUT
Số nguyên dương n giá trị không qúa 1 tỷ.

OUTPUT
Tổng các ước số của n (không kể n).

Ví dụ
INPUT                  OUTPUT
----------------------------------
4                      3
__________________________________
5                      1
__________________________________
6                      6
__________________________________
8                      7
__________________________________
27                     13

*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
long long n;
cin>>n;
long long x =0;
for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
        x+=i;
        if(i!=(n/i)){
            x+=(n/i);
        }
    }
} cout<<x-n;
    return 0;
}
