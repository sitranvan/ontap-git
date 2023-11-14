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

// Kiểm tra số chính phương
bool laSoChinhPhuong(int n) {
    if (n < 0) {
        return false;
    }
    int sqrtN = sqrt(n);
    return sqrtN * sqrtN == n;
}

// Kiểm tra số hoàn thiện
bool ktSoHoanThien(int n) {
	int sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0)
			sum += i;
	}
	if (sum == n) return true;
	return false;
}

int main() {
    
	// Nhanh 1
	cout<<"Hello nhanh 1";
	
	// Nhanh 2
	cout<<"Hello nhanh 2";
	

	//xung dot1
	cout<<"Demo xung dot";


    return 0;
}
