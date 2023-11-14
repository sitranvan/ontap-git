
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#define MAX 100
using namespace std;
void nhapMang(int arr[], int& n) {
	do
	{
		cout << "Nhap so luong phan tu:";
		cin >> n;
	} while (n < 0);
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + rand() % 50;// random
		cout << "Arr[" << i << " ] = ";
		cin >> arr[i];
	}
}
void xuatMang(int arr[], int n) {
	cout << "XUAT MANG" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "    ";

	}
}
void xuatPhanTuAm(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			cout << arr[i] << "   ";
		}
	}
}
void phanTuLe(int arr[], int n) {
	cout << "XUAT CAC PHAN TU LE\n";
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			cout << arr[i] << "   ";
		}
	}
}
void phanTuChanNhoHon20(int arr[], int n) {
	cout << "PHAN TU CHAN NHO HON 20 " << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 20 && arr[i] % 2 == 0)
		{
			cout << arr[i] << "   ";
		}
	}
}
int timViTriPhanTuX(int arr[], int n, int& x) {
	cout << "Nhap phan tu x: ";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			return i;
		}
	}
}
void timMinMax(int arr[], int n) {
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "MIN = " << min << endl;
	cout << "MAX = " << max << endl;

}
int timMax(int arr[], int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
int tongPhanTuViTriChan(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i += 2)
	{
		sum += arr[i];
	}
	return sum;
}
int tongPhanTuCucDai(int arr[], int n) {
	int i, tong = 0;
	if (arr[0] > arr[1])
		tong += arr[0];
	if (arr[n - 1] > arr[n - 2])
		tong += arr[n - 1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
		{
			tong += arr[i];
		}
	}
	return tong;
}
int tongPhanTuCucTieu(int arr[], int n) {
	int i, tong = 0;
	if (arr[0] < arr[1])
		tong += arr[0];
	if (arr[n - 1] < arr[n - 2])
		tong += arr[n - 1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
		{
			tong += arr[i];
		}
	}
	return tong;
}
int tbCongViTriLe(int arr[], int n) {
	float  sum = 0;
	int dem = 0;
	float sumtb = 0;
	for (int i = 1; i < n; i += 2)
	{
		sum += arr[i];
		dem++;
		sumtb = (float)sum / dem;

	}

	return sumtb;
}
void sapXepGiam(int arr[], int n) {
	for (int i = 0; i < n - 1; i++)// thuat toan noi bot
	{
		for (int j = n - 1; j > i; j--)
		{
			if (arr[j] > arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);// ham sap xep c++ phien ban moi dung ham swap
			}
		}
	}

}
void sapXepTang(int arr[], int n) { // i la bieu thi cho so luong phan tu

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
}
void xoaPhanTu(int arr[], int& n, int idx) {
	for (int i = idx; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}
	n--;
}
void xoaPhanTuTaiViTriLe(int arr[], int& n) {
	for (int i = 1; i < n; i += 2)
	{
		xoaPhanTu(arr, n, i);
		i--;

	}
}

void xoaPhanTuMax(int arr[], int& n) {
	int x = timMax(arr, n);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			xoaPhanTu(arr, n, i);
			i--;
		}
	}

}
void xoaPhanTuNhoHonX(int arr[], int& n, int& k) {
	cout << "Nhap gia tri X = ";
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < k)
		{
			xoaPhanTu(arr, n, i);
			i--;
		}
	}
}
void xoaPhanTuTrungVoiX(int arr[], int& n, int& x) {
	cout << "Nhap gia tri X = ";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			xoaPhanTu(arr, n, i);
			i--;
		}
	}
}
void chenPhanTuX(int arr[], int& n, int idx, int x) {

	if (idx >= 0 && idx <= n)
	{
		for (int i = n; i > idx; i--)
		{
			arr[i] = arr[i - 1];

		}
		arr[idx] = x;
		n++;

	}
}
void chenXVaoSauSNT(int arr[], int& n, int x) {
	for (int i = 0; i < n; i++)
	{
		if (ktNguyenTo(arr[i]))
		{
			chenPhanTuX(arr, n, x, i + 1);
		}
	}
}

void chenXvaoPhanTuChan(int arr[], int n, int x)
{
	int i, j;
	for (i = n - 1; i >= 0; i--)
	{
		if (arr[i] % 2 == 0)
		{
			n++;
			for (j = n - 1; j > i; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[j + 1] = x;
		}
	}
}


int tongCacPhanTuTrongMang(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int timViTriChenVao(int arr[], int& n, int& x) {

	if (x < arr[0])
	{
		return 0;
	}
	if (x > n - 1)
	{
		return n;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= x)
		{
			return i;
		}
	}
}
int timPhanTuXuatHienNhieuNhat(int arr[], int n) {
	sapXepTang(arr, n);
	int max = 0;
	int dem = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			dem++;
			if (dem > max) {
				max = arr[i];


			}
		}
		else
		{
			dem = 1;
		}
	}
	return max;
}

void daoNguocMang(int arr[], int n) {
	for (int i = 0; i <= n / 2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
}
bool checkDoiXung(int arr[], int n) {
	for (int i = 0; i <= n / 2; i++)
	{
		if (arr[i] != arr[n - 1 - i])
		{
			return false;
		}
	}
	return true;
}
bool ktNguyenTo(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) { // ham kiem tra so nguyen to
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
void inSoNguyenTo(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (ktNguyenTo(arr[i]))
		{
			cout << arr[i] << "   ";
		}
	}
}
bool ktSoChinhPhuong(int n) {
	int sqr = sqrt(n);
	return (sqr * sqr == n);
}
int demSoChinhPhuong(int arr[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktSoChinhPhuong(arr[i]))
		{
			dem++;
		}
	}
	return dem;
}
bool ktSoHoanThien(int n) {
	int sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0)
			sum += i;
	}
	if (sum == n) return true;
	return false;
}
void inSoHoanThien(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (ktSoHoanThien(arr[i]) == true)
		{
			cout << arr[i] << "   ";
		}
	}
}
int vtnt(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(arr[i]))
			return i;
}
void chenXvaoTruocSNT(int arr[], int& n, int x)
{
	int i = vtnt(arr, n);

	for (int j = n; j >= i + 1; j--)
		arr[j] = arr[j - 1];
	arr[i] = x;
	n++;
}

int viTriMax(int arr[], int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			return i;
		}
	}
}
void chenXvaoTruocMax(int arr[], int& n, int x)
{
	int i = viTriMax(arr, n);

	for (int j = n; j >= i + 1; j--)
		arr[j] = arr[j - 1];
	arr[i] = x;
	n++;
}

int main()
{
	int arr[MAX], a[100], n, x, k;


	nhapMang(arr, n);
	xuatMang(arr, n);
	
	system("pause");
	return 0;
}