#include <bits/stdc++.h>
using namespace std;

int main() {
    char* a = new char[10]; 
    char* c = a + 3;       
    for (int i = 0; i < 9; i++) a[i] = 'a';  
    a[9] = '\0';             
    
    cerr <<"a: " << "-" << a << "-" << endl; 
    cerr <<"c: " << "-" << c << "-" << endl;  
    delete c;  // Lỗi: giải phóng bộ nhớ đã được cấp phát trong khi c chỉ trỏ 1 phần của a
    cerr << "a after deleting c:" << "-" << a << "-" << endl;  //  Lỗi đã xảy ra ở dòng trước nên kết quả không dự đoán được
    
    delete[] a; 
    return 0;
}
