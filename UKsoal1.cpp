#include <iostream>
using namespace std;

int main(){
	int totalDetik,jam,menit,detik;

	cout<<"Masukan total detik : ";
	cin>>totalDetik;
	
	//proses konversi
	jam = totalDetik / 3600; // satu jam = 3600 detik
	totalDetik = totalDetik % 3600;
	menit = totalDetik / 60; // satu menit = 60 detik,sisa hasil bagi (%) dari jam kemudian dibagi 60 detik
	detik = totalDetik % 60;

	//output hasil
	cout<<"\nHasil Konversi : "<<endl;
	cout<<jam<<"jam,"<<menit<<"menit,"<<detik<<"detik,"<<endl;
	
	return 0;
	
}
