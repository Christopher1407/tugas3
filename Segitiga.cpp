#include <iostream>

using namespace std;
int main() 

{
	int n,i,j;
	cout<<"Looping Bintang Segitiga \n\n";
	cout<<"Masukkan tinggi segitiga : "; cin>>n; 
	cout<<"\n";
	for (i=1; i<=n;
	i++)
	{
		for (j=1; j<=i;j++)
	{
		cout<<j;
	}
		cout<<" \n";
	}
		for (i=n-1;i>=1;i--)
	{	
		for (j=1;j<=i;j++)
	{
		cout<<j;
	}
		cout<<" \n";
	}
}
