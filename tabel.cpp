#include <iostream>

using namespace std;
int main()
 
{
	int i, j, n;
	cout<<"	Tabel perkalian \n";
	cout<<"---------------------------------\n";
	cout<<"---------------------------------\n";
	cout<<" Masukan Angka : ";cin>>n;
	
	for (i=1;i<=n;i++)

	{ 
	cout<<setw(5)<<i;
	for (j=1;j<=n;j++)
	cout<<setw(5)<<i*j;
	cout<<endl;
	}

}
