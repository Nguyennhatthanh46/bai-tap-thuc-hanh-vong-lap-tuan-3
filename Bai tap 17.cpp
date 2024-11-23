/*
Cho dãy số nguyên a1, a2, . . ., an. 
Trong trường hợp cần thiết được phép đổi chổ nhiều nhất 1 lần 2 số ai và aj, i ≠ j, 1 ≤ i, j ≤ n.

Tổng s được xác định theo công thức: s = a1–a2+a3–a4+ . . . +(-1)n-1an.

Hãy xác định tổng lớn nhất có thể đạt được.

Dữ liệu: Vào từ thiết bị nhập chuẩn:
- Dòng đầu tiên chứa một số nguyên n (2 ≤ n ≤ 10^5),
- Dòng thứ 2 chứa n số nguyên a1, a2, . . ., an (1 ≤ ai ≤ 1000, i = 1 ÷ n).
Kết quả: Đưa ra thiết bị xuất chuẩn một số nguyên – tổng lớn nhất tìm được.

INPUT                  OUTPUT
---------------------------------
2
                        1
1 2  

Ví dụ:
*/

#include <iostream>
using namespace std;
int main() { 
    int n;
    cin >> n;
    int mang[n];
    for (int i = 0; i < n; i++)
    {
        cin >> mang[i];
    }
    int *gia_tri_be_nhat = &mang[0];
    int *gia_tri_lon_nhat = &mang[1];
    for (int i = 1; i < n; i += 2)
    {
        if (mang[i-1] < *gia_tri_be_nhat) {
		gia_tri_be_nhat = &mang[i-1];
	}
        if (mang[i] > *gia_tri_lon_nhat) {
	    gia_tri_lon_nhat = &mang[i];
    }
    }
    
    if (*gia_tri_lon_nhat > *gia_tri_be_nhat)
    {
    	int vitri;
        vitri = *gia_tri_lon_nhat;
        *gia_tri_lon_nhat = *gia_tri_be_nhat;
        *gia_tri_be_nhat = vitri;
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0) {
		s+=mang[i];
       } else { 
	   s-=mang[i];}
    }
   cout << s;
}
