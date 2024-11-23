/*
Pi (π) là một hằng số toán học được định nghĩa là tỷ lệ giữa chu vi của một hình tròn với đường kính của nó. 
Hằng số này có giá trị gần đúng là 3,1415926535897. Nó thường được biểu thị bằng chữ cái Hy Lạp π và được sử dụng từ giữa thế kỷ 18.

Pi có thể được tính gần đúng bằng công thức sau:
pi = 4(1 - 1/3 + 1/5 - 1/7 + ... + ((-1)^n)/(2n+1)..) 
Viết chương trình tính số pi:

Input
Số dương n ≥ 1

Output
Giá trị gần đúng của pi

VÍ DỤ
INPUT            OUTPUT
------------------------------
2                3.46667   
______________________________
1                2.66667
______________________________
30               3.17384

*/

#include<iostream>
#include<cmath>
using namespace std;
int main (){ 
float x;
int n;
cin>>n;
for(int i =0;i<=n;i++){
	x+=(pow(-1,i))/(2*i+1);
}cout<<4*x;
	return 0;
}
