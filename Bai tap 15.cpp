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
