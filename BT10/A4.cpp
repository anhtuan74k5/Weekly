#include <bits/stdc++.h>
using namespace std;

int* createDynamicMemory() {
    int x = 10;      
    int* ptr = &x;     
    return ptr;       
}

int main() {
    int* dynamicPtr = createDynamicMemory();  
    
    // Khi chương trình ra khỏi phạm vi của hàm createDynamicMemory, biến x sẽ bị hủy, vùng nhớ mà dynamicPtr trỏ tới sẽ không còn hợp lệ
    cout << *dynamicPtr << endl;
    
    delete dynamicPtr;  // Lỗi xảy ra ở đây vì dynamicPtr trỏ tới một biến địa phương đã bị hủy khi chương trình ra khỏi phạm vi của hàm createDynamicMemory

    return 0;
}
