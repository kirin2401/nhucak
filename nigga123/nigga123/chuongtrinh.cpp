#include "thuvien.h"
int main() {
	Dayso (l);
	/*int key;*/
	init(l);
	nhap(l);
	xuat(l);
	int key;
	cout << "\n nhap gia tri can tim trong mang da sap xep";
	cin >> key;
	if (binarysearch(l, key) != 1)
	{
		cout << "vi tri can tim " << key << "la" << binarysearch(l, key);
	}
	else
	{
		cout << "khong tim thay vi tri cua " << key << "trong danh sach";
	}
	/*int keys;
	cout << "\n gia tri can them ";
	cin >> keys;
	int pos;
	cout << "\n nhap vao vi tri can them";
	cin >> pos;
	insert(l, pos, keys);
	xuat(l);*/

	/*cout << "vi tri co gia tri lon nhat la; " << maxA(l) << endl;
	cout << "vi tri co gia tri be nhat la; " << minA(l) << endl;

	cout << "mang da sap xep" << endl;
	sapxepbedenlon(l);
	xuat(l);
	cout << "mang da sap xep" << endl;
	sapxeplondenbe(l);
	xuat(l);*/
	
	/*studen a;*/
	/*nhapsv(a);
	xuatsv(a);*/
	/*cout << " \n nhap key can tim ";
	cin >> key;
	if (timtuyentinh(l, key)!= -1)
	{
		cout <<"vi tri cua" << key << "la" << timtuyentinh(l, key);
	}*/
}
