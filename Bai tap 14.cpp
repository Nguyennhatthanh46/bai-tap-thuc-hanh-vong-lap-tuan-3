/*
Cho số nguyên dương n. Đếm số lượng chữ số trong n là ước số của n.

INPUT 
Số nguyên dương n.

OUTPUT
Số lượng chữ số trong n là ước số của n.

VÍ DỤ
INPUT                  OUTPUT
-------------------------------------
1234                   2
*/

#include<iostream>
using namespace std;
int main (){ 
	int x = 0;
	int n;
	int y;   
	cin>>n;
	for(int i=n;i!=0;i/=10){
	y=i%10;
	if((y!=0)&&(n%y==0)){
		x++;
	}
	}cout<<x;
	return 0;
}
