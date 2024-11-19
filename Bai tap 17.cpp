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
