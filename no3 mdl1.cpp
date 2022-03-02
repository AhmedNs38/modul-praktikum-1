#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int x, jumlah=0;
	float rata;
	cout << "Masukkan banyak data : ";
	cin>>x;
	int d[x];
	for(int i=0 ; i<x ; i++){
		cout << "Data [" << i+1 << "] = ";
		cin >> d[i];
		jumlah += d[i];
	}
	 rata=jumlah/x;
	 cout << "Banyak data : " << x << endl;
	 cout << "Rata-rata : " << rata << endl;
	 cout << "Jumlah : " << jumlah<<endl;
	 float sigma = 0;
	 for (int i=0 ; i < x ; i++){
	 	sigma += pow((d[i] - rata), 2);
	 }
	  float sd = (float) sqrt (sigma/x);
	  cout << "Hasil sd\t : " << sd;
	  return 0;
}
