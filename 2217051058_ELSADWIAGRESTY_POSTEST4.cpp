//    Membuat program untuk menghitung varians 
//	untuk angka berurutan dengan C++

#include <iostream>
using namespace std;
int main(){
	
	float n,jumlahsampel=0 ,ratarata,jumlahdata=0,S;
	cin>>n;
	
//	menghitung jumlah sampel atau sigma dan rata-rata 
//	atau mean
	for(int a=1;a<=n; a++){
		jumlahsampel =jumlahsampel+a;
	}ratarata=jumlahsampel/n;
	
//	menghitung jumlah data (x-x bar)
	for(int b=1;b<=n; b++){
		jumlahdata=jumlahdata+(b-ratarata)*(b-ratarata);
	
//	menghitung varians atau ragam sampel	
	}S=jumlahdata/(n-1);
		cout<<S;

	return 0;


}
