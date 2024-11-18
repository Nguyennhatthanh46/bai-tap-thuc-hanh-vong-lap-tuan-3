#include <iostream>
using namespace std;
int main(){
long long n;
cin>>n;
for(n;n!=0;n/=10){
	n%10;
	if(n%10!=0){
		break;
	}
}
int y = 0;
for(long long i = n; i!=0;i/=10){
	i%10;
	if(i%10==0){
		y++;
	}
}cout<<y;
}
