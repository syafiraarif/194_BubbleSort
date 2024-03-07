

#include <iostream>
using namespace std;


int a[20];   // deklarasi array a dengan ukuran 20
int n;       // deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input()              // procedure untuk input
{      
	while (true)         // looping
	{   

		cout << "masukan banyaknya elemen pada array : ";   // output ke layar
		cin >> n;        // input dari pengguna

		if (n <= 20)     // jika n kurang dari atau sama dengan 20
		{
			break;       // keluar dari loop
		}
		else              // jika n lebih dari 20
		{         
			cout << "n\array dapat mempunyai maksimal 20 elemen.\n" << endl;  //output ke layar
		}
	}

	cout << endl;                                // output baris kpsong
	cout << "===================" << endl;       //output ke layar
	cout << "masukan elemen array : " << endl;   // output ke layar

	for (int i = 0; i < n; i++) {                  //looping dari i dimulai dari 0 hingga n-1
		cout << "data ke- " << (i + 1) << ":";   // output ke layar
		cin >> a[i];
	}
}

void display() {                                          //procedure untuk menampilkan hasil
	cout << endl;                                         //output baris kosong
	cout << "===================" << endl;                // output ke layar
	cout << "elemen array yang telah tersusun" << endl;  //output ke layar
	cout << "===================" << endl;                //output ke layar
	for (int j = 0; j < n; j++) {                         //looping dengan j dimulai dengan 0 hingga n-1
		cout << "data ke- " << j + 1 << ":";
		cout << a[j] << endl;                             //output ke layar
	}
	cout << endl;                                          //stop

}

void bubblesortarray()                                //procedure untuk menentukan array dengan metode bubble sort
{                        
	int pass = 1;                              

	for (pass; pass <= n - 1; pass++)                  // looping dengan i dimulai dari 1 hingga n-1
	{           
		for (int j = 0; j <= n - 1 - pass; j++ )        // looping dengan j dimulai dari 0 hingga n-i
		{   
			if (a[j] > a[j + 1])                         // jika nilai pada a[j]  lebih besar dari a[j+1]
			{                   
				int temp = a[j];                     // simpan nilai a[j] ke  variabel sementara temp
				a[j] = a[j + 1];                     // assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;                     // assign nilai temp ke a[j+1]
			}
		}

	}
}

int main()
{
	input();             // memanggil read()
	bubblesortarray();   // memanggil bubblesortarray()
	display();           // memanggil display ()
	return 0;
}