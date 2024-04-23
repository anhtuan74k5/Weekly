#include <bits/stdc++.h>
using namespace std;
int main ()
{
int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p; 
*p2 = 100;  // ghi đè vào bộ nhớ đã được giải phóng
 cout << *p2;   // truy cập vào vùng nhớ không hợp lệ
 delete p2; // giải phóng bộ nhớ đã được giải phóng trước đó 
}