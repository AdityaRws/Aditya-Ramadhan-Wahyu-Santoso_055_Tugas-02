#include <iostream>
#include <math.h>
using namespace std;

	int main(){
		float nilai_praktikum, nilai_teori, nilai_tugas, nilai_final_project;
		cout << "Nilai Rata-Rata Mata Kuliah"<<endl;
		cout << "\n";
		
		cout << "Nilai Praktikum : ";
		cin >> nilai_praktikum;
		cout << "Nilai Teori : ";
		cin >> nilai_teori;
		cout << "Nilai Tugas : ";
		cin >> nilai_tugas;
		cout << "Nilai Final Project : ";
		cin >> nilai_final_project;
		
		cout << " Nilai Rata Rata = " <<(nilai_praktikum*0.4)+(nilai_teori*0.4)+(nilai_tugas*0.1)+(nilai_final_project*0.1)/4.0<<endl;
		
		return 0;
	}