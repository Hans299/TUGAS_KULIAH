#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()

{
	string pertanyaan;
	do{
	int x;
	double a[x],b[x],c[x],d[x],jarak;
	int perhitungan;
	cout<<"PROGRAM MENGHITUNG JARAK SUATU TITIK DENGAN TITIK LAIN PADA KOORDINAT CARTESIAN"<<endl;
	cout<<"1.Jarak dengan titik pusat (0,0) "<<endl;
	cout<<"2.Jarak dengan titik pusat inputan USER"<<endl;
	cout<<"Masukkan pilihan perhitungan = ";
	cin>>perhitungan;
	system ("cls");
	while(perhitungan != 1 and perhitungan != 2){
		cout<<"Masukkan pilihan perhitungan dengan benar = ";
		cin>>perhitungan;
	}
	cout<<"Masukkan banyak titik koordinat =  ";
	cin>>x;
	if(perhitungan==1){	
		for(int i=1;i<=x;i++){
			cout<<"Masukkan titik ke-"<<i<<" = ";
			cin>>a[i];
			cin>>b[i];	
			jarak=sqrt(pow((a[i]),2)+pow((b[i]),2));
			cout<<"Jarak Antar Titik = "<<jarak<<endl;
		}
	}
	if(perhitungan==2){
		for(int i=1;i<=x;i++){
			cout<<"Masukkan titik ke-"<<i<<" = ";
			cin>>a[i];
			cin>>b[i];
			cout<<"Masukkan titik pusat ke-"<<i<<" = ";
			cin>>c[i];
			cin>>d[i];	
			jarak=sqrt(pow((a[i]-c[i]),2)+pow((b[i]-d[i]),2));
			cout<<"Jarak Antar Titik = "<<jarak<<endl;
			}
	}
	cout<<endl;
	cout<<"Apakah anda ingin mengubah perhitungan ?"<<"\n";
	cin>>pertanyaan;
	system("cls");
}while(pertanyaan=="iya");
cout<<"Terima kasih sampai jumpa"<<endl;
return 0;
}