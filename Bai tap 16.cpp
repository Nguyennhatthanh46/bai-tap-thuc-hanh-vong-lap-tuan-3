/*
Chữ số 0 được phát minh muộn nhất trong số các chữ số. Giáo sư Braun trong công trình nghiên cứu về lịch sử số học đã dành hẳn một chương nói về số 0. Các chữ số 0 không có nghĩa (những chữ số 0 bên trái trước chữ số khác 0 đầu tiên) đương nhiên là không cần thiết và sẽ không được xét. 
Những chữ số cuối cùng của một số và là 0 cũng có thể vòng tránh bằng cách thay cụm số 0 đó bằng từ chục, trăm, nghìn, . . . Nhưng những chữ số 0 ở giữa thì không thể bỏ qua hay vòng tránh.

Giáo sư Braun đưa ra khái niệm “độ trẻ” của một số thập phân nguyên dương là số lượng chữ số 0 không đứng cuối trong số, tức là sau nó còn ít nhất một chữ số khác 0. Ví dụ, số 980090600 có độ trẻ là 3.

Cho số nguyên dương n. Hãy xác định độ trẻ của nó.

-Dữ liệu: Vào từ thiết bị nhập chuẩn gồm một dòng chứa số nguyên n (1 ≤ n ≤ 10^18).
-Kết quả: Đưa ra thiết bị xuất chuẩn một số nguyên – độ trẻ của số đã cho.

Ví dụ:
INPUT                  OUTPUT
--------------------------------
980090600              3

*/

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
