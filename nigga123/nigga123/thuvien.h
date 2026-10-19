#include <iostream>
using namespace std;

const int Max = 36;
struct studen{
	int Mssv;
	char Hoten[36];
	double GPA;
};
void nhapsv(studen&);
void xuatsv(studen);

struct Dayso {
	int ds[Max];
	int n;
};
void init(Dayso&);
bool isFull(Dayso);
bool isEmpty(Dayso);
void nhap(Dayso&);
void xuat(Dayso);
int maxA(Dayso);
int minA(Dayso);
void sapxeplondenbe(Dayso&);
void sapxepbedenlon(Dayso&);
void insert(Dayso&, int, int);
void remove(Dayso&, int);
int binarysearch(Dayso&, int);
//int timtuyentinh(Dayso, int);
