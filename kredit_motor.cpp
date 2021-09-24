#include <iostream>
#include <math.h>
using namespace std;

	int main(){
		float harga_motor, lama_kredit, harga_pokok, bunga, cicilan, total_harga_motor;
		cout << "Kredit Motor"<<endl;
		cout << "\n";

		cout << "Harga Pokok"<<endl;
		cout << "\n";
		cout << "Masukkan harga motor : ";
		cin >> harga_motor;
		cout << "Masukkan lama kredit (Bulan) : ";
		cin >> lama_kredit;
		cout << " Harga Motor = " <<(harga_motor/lama_kredit)<<endl;
		cout << "\n";

		cout << "Bunga"<<endl;
		cout << "\n";
		cout << "Masukkan harga pokok : ";
		cin >> harga_pokok;
		cout << " Harga Pokok = " <<(harga_pokok*0.1)<<endl;
		cout << "\n";

		cout << "Cicilan"<<endl;
		cout << "\n";
		cout << "Masukkan harga pokok : ";
		cin >> harga_pokok;
		cout << "Masukkan bunga : ";
		cin >> bunga;
		cout << " cicilan = " <<(harga_pokok+bunga)<<endl;
		cout << "\n";

		cout << "Total Harga Motor"<<endl;
		cout << "\n";
		cout << "Masukkan cicilan : ";
		cin >> cicilan;
		cout << "lama kredit : ";
		cin >> lama_kredit;
		cout << " Total Harga Motor = " <<(cicilan*lama_kredit)<<endl;
		cout << "\n";

		cout << "Keuntungan Dealer"<<endl;
		cout << "\n";
		cout << "Masukkan total harga motor : ";
		cin >> total_harga_motor;
		cout << "Masukkan harga motor : ";
		cin >> harga_motor;
		cout << " Keuntungan dealerS = " <<(total_harga_motor-harga_motor)<<endl;
		cout << "\n";

		return 0;
	}
