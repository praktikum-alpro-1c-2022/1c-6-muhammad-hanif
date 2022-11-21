#include <iostream>
using namespace std;
int gaji=7500, um=10000, ut=13000, hasil;

int gapok(int jjk){
  return hasil = gaji * jjk;
}
int lembur(int jjk){
  return hasil = gaji * 1.5 * (jjk-8);
}
int makan(){
  return um;
}
int transport(){
  return ut;
}

int main(){
  int NIP,jjk;
  string nd, nb;
  cout << "Input NIP 		: ";
  cin >> NIP;
  cout << "Input Nama depan 	: ";
  cin >> nd;
  cout << "Input Nama belakang 	: ";
  cin >> nb;
  cout << "Input Jumlah Jam Kerja 	: ";
  cin >> jjk;
  system("cls");
  cout << "NIP        	: " << NIP;
  cout << "\nNama Lengkap	: " << nd << " " << nb;
  cout << "\nJumlah Jam Kerja : " << jjk;
  cout << "\n-----------------------------------------";
  if(jjk <= 8){
    cout << "\nGaji Pokok   : " << gapok(jjk);
    cout << "\nGaji Lembur  : -";
    cout << "\nUang Makan   : -";
    cout << "\nUang Makan   : -";
    cout << "\n---------------------------------------";
  }else if(jjk >=10){
    cout << "\nGaji Pokok   : " << gapok(jjk);
    cout << "\nGaji Lembur  : " << lembur(jjk);
    cout << "\nUang Makan   : " << makan();
    cout << "\nUang Makan   : " << transport();
    cout << "\n---------------------------------------";
  }else{
    cout << "\nGaji Pokok   : " << gapok(jjk);
    cout << "\nGaji Lembur  : " << lembur(jjk);
    cout << "\nUang Makan   : " << makan();
    cout << "\nUang Makan   : -";
    cout << "\n---------------------------------------";
  }

}
