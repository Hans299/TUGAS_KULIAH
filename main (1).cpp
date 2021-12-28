#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
	cout<<"Program Kalkulator Laporan Praktikum Fisika Dasar TPB"<<endl;
    int n;
    cout<<"Masukkan Banyak data = ";
    cin>>n;
    int a[n];
    for(int i=1; i<=n;i++){
        cout<<"Masukan data ke-"<<i<<" = ";
        cin>>a[i];
    }
    int perhitungan;
    double ratarata,standardeviasi,ketelitian,sum = 0,t=0;
    cout<<"Pilih perhitungan = "<<"\n";
    cout<<"1. Rata-Rata"<<"\n";
    cout<<"2. Standar Deviasi"<<"\n";
    cout<<"3. Ketelitian"<<"\n";
    cout<<"4. Seluruh perhitungan "<<"\n";
    cout<<"Masukkan Pilihan Perhitungan = ";
    cin>>perhitungan;
    if(perhitungan==1){
        for(int i=1;i<=n;i++){
            sum+=a[i];
        }
        ratarata=sum/n;
        cout<<"Nilai Rata-Rata = "<<ratarata;
    }
    if(perhitungan==2){
        for(int i=1; i<=n;i++){
        	sum+=a[i];
        }
        ratarata = sum/n;
        for(int i=1; i<=n;i++){
        	t+=(a[i]-ratarata)*(a[i]-ratarata);
        }
        standardeviasi = sqrt(t/((n-1)*n));
        cout<<"Nilai Standar Deviasi = "<<standardeviasi;
    }
    if(perhitungan==3){
    	for(int i=1; i<=n;i++){
        	sum+=a[i];
        }
        ratarata = sum/n;
        for(int i=1; i<=n;i++){
        	t+=(a[i]-ratarata)*(a[i]-ratarata);
        }
        standardeviasi = sqrt(t/((n-1)*n));
        ketelitian = (1-(standardeviasi/ratarata))*100;
        cout<<"Ketelitian Data-datanya = "<<ketelitian<<"%";
    }
    if(perhitungan==4){
    	for(int i=1; i<=n;i++){
        	sum+=a[i];
        }
        ratarata = sum/n;
        for(int i=1; i<=n;i++){
        	t+=(a[i]-ratarata)*(a[i]-ratarata);
        }
        standardeviasi = sqrt(t/((n-1)*n));
        ketelitian = (1-(standardeviasi/ratarata))*100;
        cout<<"Nilai Rata-Rata = "<<ratarata<<endl;
        cout<<"Nilai Standar Deviasi = "<<standardeviasi<<endl;
        cout<<"Ketelitian Data-datanya = "<<ketelitian<<"%";
	}
    return 0;
}