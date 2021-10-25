// Program untuk Mencatat Daftar Barang dan Harga dalam Bentuk Struk

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Deklarasi variabel
	int jml_beli, bayar, jumlah[50], harga[50], sub_tot[50];
	string nama_barang[50];
	float tot;
	
	cout<<"DAFTAR BARANG DAN HARGA"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"Jumlah barang yang dibeli: ";
	cin>>jml_beli; //Pengguna memasukan jumlah barang yang dibeli
	
	for (int i=0;i<jml_beli;i++)
	{
		cout<<endl;
		cout<<"Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang : ";
		cin>>nama_barang[i]; //Pengguna menginput nama barang dan disimpan pada array nama_barang
		
		cout<<"Jumlah      : ";
		cin>>jumlah[i]; //Pengguna menginput jumlah barang dan disimpan pada array jumlah
		
		cout<<"Harga       : ";
		cin>>harga[i]; //Pengguna menginput harga barang dan disimpan pada array harga
		
		sub_tot[i]=jumlah[i]*harga[i]; // Menjumlahkan harga sub total barang
		tot+=sub_tot[i]; //Menjumlahkan seluruh sub total barang
	}
	cout<<endl;
	cout<<"STRUK BELANJA TETITB MART"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jml_beli;i++)
	{
	  cout<<i+1<<setw(10)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl; //Menampilkan semua nilai array
	}
	cout<<"---------------------------------------------------------"<<endl;

	//Menampilkan Keterangan
	cout<<"Total Bayar  : Rp."<<tot<<endl;//Menampilkan total harga yang harus dibayar
	cout<<"Bayar        : Rp.";
	cin>>bayar; // Pengguna menginput jumlah yang dibayarkan
	cout<<"Kembali      : Rp."<<(bayar-tot)<<endl; // Menampilkan uang kembali

    return 0;
}
