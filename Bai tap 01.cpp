/*

IN HÌNH v1
Viết chương trình nhập số nguyên dương n. In ra màn hình theo định dạng bên dưới

INPUT                               OUTPUT
---------------------------------------------
3	                                #
                                    ##
                                    ###
---------------------------------------------
5	                                #
                                    ##
                                    ###
                                    ####
                                    #####
                                    
*/
#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i;j++){
        cout<<"#";
    }
    cout<<endl;
}
}
