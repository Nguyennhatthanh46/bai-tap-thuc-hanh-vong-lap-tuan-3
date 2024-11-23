/* 
	Cây của Bob
Ngoài đam mê toán và có đứa bạn Alice, Bob còn có sở thích làm vườn. Nhân dịp sinh nhật lần thứ 18 của Bob, Alice lượn qua tiệm cây cảnh ở Bình Thạnh và mua cho Bob một cây bonsai làm quà. Điều làm nên sự đặc biệt của cây bonsai này chính là khả năng phát triển độc lạ của nó. Vào mùa mưa (từ đầu tháng 5 đến hết tháng 11), cây sẽ tăng trưởng gấp 2 lần chiều cao hiện tại. Còn vào mùa khô (từ đầu tháng 12 đến hết tháng 4), cây sẽ tăng trưởng thêm 1 cm. Ngoài ra, nếu chiều cao của cây lớn hơn 200, cây sẽ ngay lập tức giảm đi 2/3 chiều cao hiện tại của nó.

Giả sử tại thời điểm hiện tại (tháng m1 năm y1), cây có chiều cao hiện tại của cây là x (cm). Bạn hãy giúp Bob ước tính chiều cao của cây vào tháng m2 năm y2 (làm tròn 2 chữ số thập phân).

INPUT 
- 1 số nguyên thực x biểu diễn cho chiều cao của cây tại thời điểm hiện tại.

- 4 số nguyên m1, y1, m2, y2 (1 ≤ m1, m2 ≤ 12) (1 ≤ y1, y2 ≤ 10^9)

(Lưu ý: Các test cases luôn đảm bảo các giá trị đầu vào thỏa mãn ràng buộc. Do đó, không cần phải lập trình để kiểm tra ràng buộc khi nhập các giá trị đầu vào)

OUTPUT
Chiều cao của cây tại tháng m2 năm y2.

INPUT                  OUTPUT
-----------------------------------
10

5 2024                 43.00

12 2025         
___________________________________
199.5

12 2024                134.67

12 2025       
___________________________________
199.5

12 2024                89.78

6 2026
___________________________________

GIẢI THÍCH

*Năm	           2024	            |         2025
*Tháng	       5	11   |	12 	4   |	5	11   |	12
*Chiều cao	  20	          21	           42	          43
----------------------------------------------------------------------------

*Năm	           2024	            |         2025
*Tháng	                     |	12 	4   |	5	11   |	12
*Chiều cao	  	          66.8333	   133.67	  134.67
----------------------------------------------------------------------------
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int m1, y1, m2, y2;
float x;
cin >> x >> m1 >> y1 >> m2 >> y2;
while (y1<y2){
    if ((m1>=5)&&(m1<=11)){
        x*=2;
        m1 = 12;
    }else{
        x++;
        if (m1==12){
		y1++;
	}
        m1=5;
    }
    if (x>200){
	x/=3;
}
}
while (m1<m2){
    if ((m1>=5)&&(m1<=11)){
        x*=2;
        m1=12;
    }else{
        x++;
        m1=5;
    }
    if (x>200){
	x/=3;
	}
}
if (m1==m2){
    if ((m1>=5)&&(m1<=11)){
        x*=2;
    }else{
        x++;
    }
    if (x>200){
	x/=3;
}
}
cout << fixed << setprecision(2) << x;
}
