/*
TÌM ƯỚC CHUNG LỚN NHẤT 

Cho 2 số nguyên dương a, b (1 ≤ a,b ≤ 2.10^9). Tìm ước chung lớn nhất của 2 số đó.
INPUT                  OUTPUT
----------------------------------
3     9                3
__________________________________
18    12               6
__________________________________
5     7                1

*/

#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	while(a!=b){
		if(a>b){
			a=a-b;
			
		}else {
			b=b-a;
		}
	}cout<<a;
}
