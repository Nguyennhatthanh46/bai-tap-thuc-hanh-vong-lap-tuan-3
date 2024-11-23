/*
Giếng ma thuật
Bạn đang đứng trước một cái giếng ma thuật, trên đó có ghi 2 số nguyên dương a và b. Mỗi lần ném một viên sỏi xuống giếng, nó sẽ trả về cho bạn a*b đồng tiền vàng, sau đó a và b sẽ tăng lên 1. Vậy nếu bạn có n viên sỏi thì sẽ kiếm được bao nhiêu đồng tiền vàng?

Ví dụ: Cho a = 1, b = 2 và n = 2, output của bài toán là 8, vì sau khi ném viên sỏi thứ nhất bạn sẽ có được 2 đồng tiền vàng, sau đó a tăng lên là 2 và b tăng lên là 3, khi ném đến viên thứ 2 thì cái giếng sẽ trả về cho bạn thêm 6 đồng tiền vàng nữa, như vậy cả thảy sẽ được 8 đồng.

INPUT
- 2 số nguyên a và b với 1 ≤ a,b ≤ 2000
- Số nguyên không âm n với 0 ≤ n ≤ 5 là số viên sỏi mà bạn có được

OUTPUT
- Một số nguyên

INPUT             OUTPUT
----------------------------------
1  2               8   

                 
*/

#include <iostream>
using namespace std;
int main()
{
int a,b,n;
cin>>a>>b>>n;
int x = 0;
for(int i =0;i <= n-1; i++){
    x+=(a+i)*(b+i);
}
cout<<x;
}
