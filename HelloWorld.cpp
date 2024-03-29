#include <iostream>

using namespace std;

int main ()
{
	int n=6;
	int a[n];
	a[0]=9;a[1]=8;
	a[2]=5;a[3]=6;
	a[4]=4;a[5]=7;
	cout <<"sap xep chon - Selection sort"<<endl;
	for (int i=0;i<n-1;i++){
		int x=i,y=a[i];
	for (int j=i+1; j<n;j++)
		if(a[j]<y) {
			x=j;
			y=a[j];
		}
		swap(a[i],a[x]);
		cout <<"buoc "<<i+1<<": ";
		for (int h=0;h<n;h++) cout <<a[h]<<" ";
		cout <<endl;
	}
}
