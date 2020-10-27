#include <iostream>

using namespace std;
int main()
	
{
	int a, b, c, jml, i, n;
	cout<<" Masukan Bilangan awal : ";cin>>a;
	cout<<" Masukan Beda  : ";cin>>b;
	cout<<" Masukan deret ke-n : ";cin>>n;
	cout<<"----------------------------------\n";
	cout<<" \n";
	cout<<"deret : ";
	cout<<a<<",";
	jml = jml+a;

	for (i=0; i<n-1; i++)
{
	c = a+b;
	a=c;
	cout<<c<<",";
	jml = jml + c;
}
	cout<<" \n";
	cout<<"jumlah deret ke-"<<n<<" : ";
	cout<<jml;	
}
