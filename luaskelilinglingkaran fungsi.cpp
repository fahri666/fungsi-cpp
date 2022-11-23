#include <iostream>
using namespace std;

int luas_lingkaran(int r){
	int luas;
	luas=3.14*r*r;
	return luas;
}

int keliling_lingkaran(int r){
	int keliling;
	keliling=2*3.14*r;
	return keliling;
}

int main()
{
	int r;
	cout<<"Masukan Jari-jari  : ";
	cin>>r;
	
	cout<<"Hasil Luas Lingkaran     = "<<luas_lingkaran(r)<<endl;
	cout<<"Hail Keliling Lingkaran = "<<keliling_lingkaran(r)<<endl;
}
