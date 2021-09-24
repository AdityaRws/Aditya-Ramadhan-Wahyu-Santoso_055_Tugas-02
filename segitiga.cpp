#include <iostream>
#include <math.h>
using namespace std;

	int main(){
		float alas, tinggi, sisi_miring;
		cout << "Sisi miring segitiga siku-siku"<<endl;
		cout << "\n";
		
		cout << "Masukkan alas segitiga siku-siku : ";
		cin >> alas;
		cout << "Masukkan tinggi segitiga siku-siku : ";
		cin >> tinggi;
		cout << " Sisi miring = " <<(alas*alas)+(tinggi*tinggi)<<endl;
		cout << "\n";
		
	
		cout << "Keliling segitiga siku-siku"<<endl;
		cout << "\n";
		cout << "Masukkan alas segitiga siku-siku : ";
		cin >> alas;
		cout << "Masukkan tinggi segitiga siku-siku : ";
		cin >> tinggi;
		cout << "Masukkan sisi miring: ";
		cin >> sisi_miring;
		cout << " Keliling = " <<(alas+tinggi+sisi_miring)<<endl;
		
		return 0;
	}
