/* 
Viết chương trình tính 3 tổng sau:
- S1(n) = 1 + 2^2 + 3^2 + ... n^n.
- S2(n) = 1 + 1x2 + 1x2x3 + ... 1x2x3x4x...xn.
- S3(n) = 1 + 1/(1+2) + 1/(1+2+3) +  ... +1/(1+2+3+4...+n).

INPUT
 1 số nguyên dương >=1 .

OUTPUT
 3 giá trị (số thực) tương ứng với kết quả của 3 tổng trên.

VÍ DỤ
INPUT             OUTPUT
----------------------------------
                  1    
     
1                 1

                  1
__________________________________
                  288
   
4                 33
             
                  1.6
__________________________________
                  1.04051e+10
    
10                4.03791e+06
              
                  1.81818

*/

#include<iostream>
#include<cmath>

using namespace std;
int main (){ 
unsigned long long n;
double y = 0;
double z = 0, z1 = 1;
double t = 0, t1 = 0;
cin>>n;
for(unsigned long long i =1;i<=n;i++){
y+=pow(i,i);
z1*=i;
z+=z1;
t1+=i;
t+=1/t1;
}
cout<<y<<endl;
cout<<z<<endl;
cout<<t<<endl;
	return 0;
}
