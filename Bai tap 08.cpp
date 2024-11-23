/* 
Viết chương trình tính 3 tổng sau:
S1(n,x) = 1 + x + x^2 + x^3 + ... x^n.
S2(n,x) = 1 + x^2 + x^4 + x^6 + ... x^2n.
S3(n,x) = 1 + x + x^2/2! + x^3/3! + ... x^n/n!.

INPUT
 2 số nguyên dương n,x ≥ 0.

OUTPUT
 3 giá trị (số thực) tương ứng với kết quả của 3 tổng trên.

VÍ DỤ
INPUT             OUTPUT
----------------------------------
                 1    
0     
                 1
5              
                 1
__________________________________
                 55987
6    
                 2.23898e+09
6               
                 244.6
 
*/

#include<iostream>
#include<cmath>

using namespace std;
int main (){ 
int x;
int n;
double y = 0,z = 0;
double t = 1, t1 =1;
cin>>n>>x;
for(int i =0;i<=n;i++){
	y+=pow(x,i);
	z+=pow(x,2*i);
}
for(int i = 1; i<=n;i++){
	t1*=i;
	t+=(pow(x,i))/(t1);
}
cout<<y<<endl;
cout<<z<<endl;
cout<<t<<endl;
	return 0;
}
