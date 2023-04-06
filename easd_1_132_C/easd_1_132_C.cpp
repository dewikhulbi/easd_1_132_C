// 1. Agar suatu masalah dapat diselesaikan dengan lebih mudah karena ketika dibuat sistem algorithma maka akan menjadi lebih terstruktur dan memudahkan pekerjaan
// 2. Statik dam Dinamis
// 3. prosesor, ukuran input, jenis input, kualitas implemental, hardware
// 4. insertionsort karena mudah untuk diimplementasikan dan tidak terlalu komplek
// 5. Quadratic: bubblesort dan insertion sort, Loglinear: quicksort

// 6.
#include <iostream>
using namespace std;

int dewi[52];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang Element Array: ";
		cin >> n;
		if (n <= 52)
			break;
		else
			cout << "\nArray dapat mempunyai 52 elemen. \n" << endl;
	}

	cout << "=====================" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "<";
			cin >> dewi[i];
	}
}

void swap(int du, int i)
{
	int temp;

	temp = dewi[du];
	dewi[du] = dewi[i];
	dewi[i] = temp;
}

void selectionsort() 
{			
	for (int i = 1; i < n; i++) {			
		for (int du = 0; du < n - i; du++) {	
			if (dewi[du] > dewi[du + 1]) {			
				int temp = dewi[du];			
				dewi[du] = dewi[du + 1];			
				dewi[du + 1] = temp;		
			}
		}
	}
}

void display() {
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan elemen Array" << endl;
	cout << "====================" << endl;
}

