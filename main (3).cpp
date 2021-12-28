#include<iostream>
#include<string>
using namespace std;
int main()
{
    string pertanyaan,lanjutan;
    int i;
    cout<<"Masukkan Banyak Data = ";
    cin>>i;
    float percepatan[i],massa[i];
    do{
    while(i<0){
        cout<<"Masukan banyak data yang benar = ";
        cin>>i;
    }
    for(int j=1;j<=i;j++){
        cout<<"Input Percepatan = ";cin>>percepatan[j];
        cout<<"Input Massa = ";cin>>massa[j];
        cout<<"Gaya = "<<massa[j]*percepatan[j]<<"Kg m/s^2"<<endl;
        cout<<"Apakah anda Ingin mengubah dalam satuan Internasionl (Ya/Tidak) = ";
        cin>>pertanyaan;
        if(pertanyaan=="Ya"){
            cout<<"Gaya = "<<massa[j]*percepatan[j]<<" N"<<"\n";
        }
        else if(pertanyaan=="Tidak"){
            cout<<"Terima Kasih"<<endl;
        }
        else{
            cout<<"Masukkan Pernyataan Yang benar = ";
            cin>>pertanyaan;
            cout<<endl;
        }
        cout<<"Apakah Ingin Mengubah perhitungan = ";
        cin>>lanjutan;
    }
     cout<<"Apakah Ingin Mengubah perhitungan = ";
     cin>>lanjutan;
}while(lanjutan == "ya");
    
}