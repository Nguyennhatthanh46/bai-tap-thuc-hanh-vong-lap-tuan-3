/*
Viết chương trình nhập vào số nguyên x sao cho 1 ≤ x ≤ 30. 
Nếu x không thỏa điều kiện, chương trình xuất ra màn hình thông báo “So <x> khong nam trong khoang [1,30].”.
Nếu x nằm trong khoảng [1,30], chương trình xuất ra màn hình số Fibonacci thứ x.

F(0) = 0
F(1) = 1
F(2) = 2
F(n) = F(n - 1) + F(n - 2) với n > 2.

Input
Một số nguyên x

Output
Thông báo “So <x> khong nam trong khoang [1,30].” nếu x không hợp lệ
Ngược lại, xuất ra màn hình số Fibonacci thứ x

Ví dụ
INPUT            OUTPUT
------------------------------------------------------
-6               So -6 khong nam trong khoang [1,30].     
______________________________________________________
6                8

*/	
#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
    int a = 0;
    int b = 1;
    int x = 1;
if(n<1||n>30){
    cout<<"So "<<n<<" khong nam trong khoang [1,30].";
}
else{

if(n == 1 || n==2){
x=1;
}else{
    for(int i=2;i<n;i++){
    a = b;
    b = x;
    x = a + b;
} 
}cout<<x;
}
}
