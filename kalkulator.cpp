#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void petunjuk();

main ()
{
petunjuk(); //tampilkan petunjuk

double Hasil;
double Angka;
double AngkaMasukan;
char op;
char jwb;

cout << "Masukan Angka = ";
cin >> Angka;
do
{
//jika angka yang mau di hitung masih nol
if (Angka == 0) {
cout << "MasukanAngka = ";
cin >> Angka;
}
cout << "Operasi : ";
cin >> op;

switch(op)
{
case '1' : Angka = 0;
break;

case '2' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = Angka + AngkaMasukan;
cout << "Jumlahnya adalah :" << Hasil << endl;
Angka = Hasil;
break;

case '3' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = Angka - AngkaMasukan;
cout << "Hasilnya adalah : " << Hasil << endl;
Angka = Hasil;
break;

case '4' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = Angka * AngkaMasukan;
cout << "Hasilnya adalah : " << Hasil << endl;
Angka = Hasil;
break;

case '5' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = Angka / AngkaMasukan;
cout << "Hasilnya adalah : " << Hasil << endl;
Angka = Hasil;
break;

case '6' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = pow(Angka,AngkaMasukan);
cout << "Hasilnya adalah : " << Hasil << endl;
Angka = Hasil;
break;

}
cout << "Apakah penghitungan mau dilanjutkan(Y/T) \n";
cin >> jwb;
}
while (jwb == 'Y' || jwb == 'y');
return 0;
}

void petunjuk()
{

cout << "=======================================================================\n";
cout << "\t\tPROGRAM CALCULATOR SEDERHANA\t\t\n";
cout << "'2'= Penjumlahan \n";
cout << "'3'= Pengurangan \n";
cout << "'4'= Perkalian \n";
cout << "'5'= Pembagian \n";
cout << "'6'= Perpangkatan\n";
cout << "=======================================================================\n";}

