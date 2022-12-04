#include <iostream>
#include <windows.h>
using namespace std;

char kode_kota,kelas,kembali;
int harga_tiket,jum_tiket,total_harga,total_pembayaran,kembalian;

int kelas_pesawat(int a){
   harga_tiket=a*15500;
   cout<<"Harga Tiket    = Rp."<<harga_tiket<<endl;
   cout<<"Jumlah pesanan = ";
   cin>>jum_tiket;
   total_harga = harga_tiket * jum_tiket;
   cout<<"Jumlah Bayar   = Rp."<<total_harga<<endl;
   return total_harga;
}
int payment(int b){
   kembalian = b - total_harga;
   cout<<b<<" - "<<total_harga<<endl; 
   cout<<"Kembalian = Rp. "<<kembalian<<endl;
   return kembalian;
}

int main(){
do
 {
   system("cls");
   cout<<"=================================================\n";
   cout<<"=                  Welcome To                   =\n";
   cout<<"=                 Four-A TRAVEL                 =\n";
   cout<<"=================================================\n";
   cout<<"Negara Tujuan             Kelas         Kelas    \n";
   cout<<"Anda                      Ekonomi(E)    Bisnis(B)\n";
   cout<<"=================================================\n";
   cout<<"1. Tokyo, Jepang          $45           $60    \n";
   cout<<"2. Seoul, Korea Selatan   $35           $50    \n";
   cout<<"=================================================\n";
   cout<<"\n=============== Pilih Kota Tujuan ===============\n";
   cout<<"\nMasukan Kode Kota [1-2]      : ";
   cin>>kode_kota;

   switch(kode_kota){
   case '1':
      {
      cout<<"Kota Tujuan Anda             : Tokyo, Jepang"<<endl;
      cout<<"\n================== Pilih Kelas ==================\n";
      cout<<"\nMasukan Kode Kelas [E/B]     : ";
      cin>>kelas;
      cout<<endl;
      if (kelas=='E' || kelas=='e')
      {
         kelas_pesawat(45);
         cout<<"=================================================\n";
         cout<<"Masukan Total Pembayaran Pelanggan = ";
         cin>>total_pembayaran;
         if (total_pembayaran >= total_harga){
            payment(total_pembayaran);
         } else {
            cout<<"Uang Anda tidak cukup!!!"<<endl;
         }
      }
      else if (kelas=='B' || kelas=='b')
      {
         kelas_pesawat(60);
         cout<<"=================================================\n";
         cout<<"Masukan Total Pembayaran Pelanggan = ";
         cin>>total_pembayaran;
         if (total_pembayaran >= total_harga){
            payment(total_pembayaran);
         } else {
            cout<<"Uang Anda tidak cukup!!!"<<endl;
         }
      }
      else{
      cout<<"Kode yang anda masukkan salah!"<<endl;
      }
      break;
   }
   case '2':
      {
      cout<<"Kota Tujuan Anda             : Seoul, Korea Selatan"<<endl;
      cout<<"\n================== Pilih Kelas ==================\n";
      cout<<"\nMasukan Kode Kelas [E/B]     : ";
      cin>>kelas;
      cout<<endl;
      if (kelas=='E' || kelas=='e')
      {
         kelas_pesawat(35);
         cout<<"=================================================\n";
         cout<<"Masukan Total Pembayaran Pelanggan = ";
         cin>>total_pembayaran;
         if (total_pembayaran >= total_harga){
            payment(total_pembayaran);
         } else {
            cout<<"Uang Anda tidak cukup!!!"<<endl;
         }
      }
      else if (kelas=='B' || kelas=='b')
      {
         kelas_pesawat(50);
         cout<<"=================================================\n";
         cout<<"Masukan Total Pembayaran Pelanggan = ";
         cin>>total_pembayaran;
         if (total_pembayaran >= total_harga){
            payment(total_pembayaran);
         } else {
            cout<<"Uang Anda tidak cukup!!!"<<endl;
         }
      }
      else{
      cout<<"Kode yang anda masukkan salah!"<<endl;
      }
      break;
   }
   default:
   cout<<"Kode yang anda masukkan salah!"<<endl;
   } // Close tag Switch Case

   cout<<"\nAnda Ingin Memesan Kembali [Y/T]   : ";
   cin>>kembali;
   cout<<endl;

} // Close tag do while
while(kembali=='Y' || kembali=='y');

cout<<"\nTerima Kasih!"<<endl;
cout<<" "<<endl;
}