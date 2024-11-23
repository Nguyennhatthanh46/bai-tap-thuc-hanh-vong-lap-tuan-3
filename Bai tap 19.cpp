/* Để trang trí phòng phục vụ tổ chức sinh nhật cho một người bạn Alice lấy một tờ giấy màu thủ công kẻ ô vuông kích thước n×m (n hàng và m cột), cắt thành hình lò xo xoắn theo hướng phải sang trái và có độ rộng của đường bằng 1:

Bắt đầu từ biên phải cột 0 cắt lên trên cho đến khi cách lề trên một ô,
Cắt sang phải theo đường biên dưới cho đến khi cách lề phải một ô,
Cắt xuống dưới, rồi sang trái, sau đó lên trên, . . . để có băng giấy độ rộng 1 ô,
Quá trình cắt sẽ dừng khi không có cách cắt tiếp mà không làm đứt băng giấy.
Hãy tính tổng độ dài đường cắt theo đơn vị ô.

Dữ liệu: Vào từ thiết bị nhập chuẩn gồm một dòng chứa 2 số nguyên n và m (2 ≤ n, m ≤ 10^9).

Kết quả: Đưa ra thiết bị xuất chuẩn một số nguyên – độ dài đường cắt.

INPUT                  OUTPUT
______________________________
3 4                    6

*/

#include <iostream>

using namespace std;

int main() { 
    long long n, m; 
    cin >> n >> m;

    cout << (m - 1) * m / 2 + (n - 2) * (n - 1) / 2 - (n - m - 1) * (n - m) / 2;
}
