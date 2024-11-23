/*
Bob là người thích toán, đặc biệt là những con số. Vào ngày sinh nhật của mình, Bob tổ chức tiệc cùng bạn bè ở 1900 và đã nghĩ ra khái niệm số đặc biệt làm quà tặng cho chính mình. Với Bob, số n được xem là số đặc biệt nếu chênh lệch của n với số đảo ngược của n chia hết cho một số k cho trước. 
Ví dụ, cho k = 3, số 14 sẽ được xem là số đặc biệt của Bob vì |14 - 41| = 27 chia hết cho 3.

Cho một số nguyên dương k. 
Bạn hãy viết chương trình để kiểm tra xem có bao nhiêu số đặc biệt của Bob trong đoạn từ x đến y. (1 ≤ x, y, k ≤ 10^9)

INPUT 
3 số nguyên dương lần lượt cho k, x, y.

OUTPUT
Số lượng số đặc biệt của Bob trong đoạn [x, y].

VÍ DỤ
INPUT                  OUTPUT
---------------------------------
6 20 23                2.

Giải thích
Với k = 6, từ 20 đến 23 có 2 số đặc biệt của Bob là 20 và 22.
*/

#include <iostream>
#include <cmath>
using namespace std;

long long sodx(long long i){
	long long tong = 0;
	long long a;
	while(i!=0){
		a=i%10;
		tong=tong*10+a;
		i/=10;
	}
	return tong;
}
int main(){
long long k,x,y;
cin>>k>>x>>y;
long long u = 0;
for(long long i = x;i<=y;i++){
	long long sodao = sodx(i);
 if ((long long)abs(i - sodao) % k == 0){
  u++;}
}cout<<u;
}
