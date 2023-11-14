#include <iostream>
#include<cmath>
using namespace std;

// Hàm nhập một số nguyên
int nhapSoNguyen(int n) {
	cout<<"Nhap so nguyen n: ";
	cin>>n;
	return n;
}

// Kiểm tra số nguyên tố
bool ktNguyenTo(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main() {
    
    return 0;
}
