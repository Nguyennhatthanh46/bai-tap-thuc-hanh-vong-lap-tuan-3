/*
Tính tổng các chữ số của số nguyên dương n.

INPUT
Một số nguyên dương (mặc định nhập đúng điều kiện)

OUTPUT
Một số nguyên dương
VÍ DỤ
INPUT                  OUTPUT
----------------------------------
64                     10
__________________________________
1546                   16

*/
#include<iostream>
using namespace std;
int main (){ 
	int x = 0;
	int n;   
	cin>>n;
	for(int i=n;i!=0;i/=10){
	x+=i%10;
	}cout<<x;
	return 0;
}
