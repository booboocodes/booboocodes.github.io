/* Hướng dẫn giải bài ở đây
Đây cũng là một phần của hướng dẫn giải bài
Gồm nhiều dòng */
#include <bits/stdc++.h>

using namespace std;

int main()
{   int X,Y,tongtien=0;
    cin >> X >> Y ;
    if (X==1) tongtien=4.00*Y;
	if (X==2) tongtien=4.50*Y;
	....
    cout << fixed << setprecision(2);
    cout << "Total: R" << tongtien;
    return 0;
}
