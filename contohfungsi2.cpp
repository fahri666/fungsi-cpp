#include <iostream>
#include <conio.h>
using namespace std;
int kurang(int a, int b)
{
	int r;
	r = a-b;
	return (r);
}

int main()
{
	int x = 5, y=3, z; z=kurang(7,2);
	
	cout<<"Pertama :"<<z<<endl;
	cout<<"Kedua   :"<<kurang(7,2)<<endl;
	cout<<"Ketiga  :"<<kurang(x,y)<<endl;
	z=4+kurang(x,y);
	cout<<"Keempat :"<<z<<endl;
	return 0;
	
	}
