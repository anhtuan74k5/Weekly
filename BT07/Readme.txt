B/ Phần câu hỏi

Câu 1. Cho đoạn lệnh sau.
char c = ‘A', d = ‘B';
char* p1 = &c; // p1 = 0x1234
char* p2 = &d; // p2 = 0x5678
char* p3;		// p3 = 0x5678
Giả sử địa chỉ của c là 0x1234, địa chỉ của b là 0x5678. Hỏi output của đoạn lệnh sau là gì?
p3 = &d;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;	// *p3 = B, p3 = 0x5678
p3 = p1;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;	// *p3 = A, p3 = 0x1234
*p1 = *p2;
cout << “*p1 = “ << *p1 << “, p1 = “ << p1 << endl;	// *p1 = B, p1 = 0x1234	

LỜI GIẢI:
Kết quả in ra sẽ là:
*p3 = B, p3 = 0x5678
*p3 = A, p3 = 0x1234
p3 = B, p3 = 0x5678


Câu 2:
Cho các lệnh sau.
int *p;
int i;
int k;
i = 4;
k = i;
p = &i;

(Những) lệnh nào trong số các lệnh dưới đây sẽ gán cho i giá trị 5?
k = 5;
*k = 5;
p = 5;
*p = 5; 


Bài giải:
	*p = 5;

Câu 3:
Giải thích lỗi sau:
char c = ‘C';
double *p = &c;

Bài giải:
Dòng code trên gây ra lỗi do con trỏ double không thể trỏ vào biến char



