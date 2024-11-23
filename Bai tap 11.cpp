/*
Viết chương trình kiểm tra số đối xứng.

Định nghĩa: Số đối xứng là một số tự nhiên mà khi đảo ngược các chữ số vẫn không thay đổi. 
Ví dụ: số 16461 là số đối xứng.
INPUT
Một số nguyên.

OUTPUT
Xuất ra true nếu là số đối xứng. Ngược lại xuất false.
VÍ DỤ
INPUT                  OUTPUT
----------------------------------
0                       true
__________________________________
123321                  true
__________________________________
45545                   false
__________________________________
-65                     false

*/

#include<iostream>
using namespace std;
int main (){ 
	int x = 0;
	int a, n;   
	cin>>n;
	for(int i=n;i!=0;i=i/10){
		a=i%10;
		x=x*10+a;
		} 
		if(x==n){
			cout<<"true";
			}
			else cout<<"false";
			return 0;
}
