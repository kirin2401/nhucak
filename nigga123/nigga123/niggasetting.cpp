#include "thuvien.h"
using namespace std;

void init(Dayso& l) {
	l.n = 0;
}
bool isFull(Dayso l) {
	return l.n == Max ? true : false;
}
bool isEmpty(Dayso l) {
	return l.n == 0 ? true : false;
}
void nhap(Dayso& l) {
	do
	{
		cout << "nhap so phan tu 1-100";
		cin >> l.n;

	} while (l.n > Max);

	for (int  i = 0; i < l.n; i++)
	{
		cout << "a[" << i << "]";
		cin >> l.ds[i];
	}



}
void xuat(Dayso l) {
	for (int i = 0; i < l.n; i++)
	{
		cout << l.ds[i] << "\t";
	}
}
int maxA(Dayso l) {
	int max = 0;
	for (int i = 0; i < l.n; i++)
	{
		if (l.ds[i] > l.ds[max])
		{
			max = i;
		}
	}
	return max;
}
int minA(Dayso l) {
	int min = 0;
	for (int i = 0; i < l.n; i++)
	{
		if (l.ds[i] < l.ds[min])
		{
			min = i;
		}
	}
	return min;
}
void sapxeplondenbe(Dayso& l) {
	for (int j = 0; j < l.n-1; j++)
	{
		int max = j;
		for (int i = j +1; i < l.n; i++)
		{
			if (l.ds[i] > l.ds[max])
			{
				max = i;
			}
		}
		swap(l.ds[j], l.ds[max]);
	}
}

void sapxepbedenlon(Dayso& l) {
	for (int j = 0; j < l.n-1; j++)
	{
		int min = j;
		for (int i = j+1; i < l.n; i++)
		{
			if (l.ds[i] < l.ds[min])
			{
				min = i;
			}
		}
		swap(l.ds[j], l.ds[min]);
	}
}
void insert(Dayso&l, int pos, int keys) {
	if (isFull(l))
	{
		throw "danh sach day roi";
	}
	for (int i = l.n - 1; i >= pos ; i--)
	{
		l.ds[i + 1] = l.ds[i];
	}
	l.ds[pos] = keys;
	l.n++;
}
void remove(Dayso& l, int pos) {
	if (isEmpty(l))
	{
		throw "chua co cai gi het";
	}
	for (int i = pos; i < l.n-1; i++)
	{
		l.ds[i] = l.ds[i + 1];
	}
	l.n--;
}

int binarysearch(Dayso& l, int key) {
	int start= 0, end = l.n = 1, mid;
	while (start <= end) {
		mid = (start + end) / 2;
		if (l.ds[mid] == key)
		{
			return mid;
		}
		else if (l.ds[mid] < key)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		return -1;
	}
}
//void nhapsv(studen& a) {
//	cout << "nhap mssv";
//	cin >> a.Mssv;
//	cin.ignore();
//	cout << "nhap hovaten";
//	cin.getline(a.Hoten, 36);
//	cout << "nhap gpa";
//	cin >> a.GPA;
//}

//void xuatsv(studen a) {
//	cout << a.Mssv << "\t" << a.Hoten << "\t" << a.GPA;
//
//}

//int timtuyentinh(Dayso l, int k) {
//	int i = 0;
//	while (i < l.n && l.ds[i] != k)
//		i++;
//	if (i, l.n) return 1;
//	return -1;
//}
