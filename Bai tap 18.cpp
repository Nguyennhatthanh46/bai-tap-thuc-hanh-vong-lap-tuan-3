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
