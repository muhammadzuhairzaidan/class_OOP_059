#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;

public:
	void input() {
		cout << "Masukkan NIM :";
		cin >> nim;
		cout << "Masukkan Nama :";
		cin >> nama;
		cout << "Masukkan nilai :";
		cin >> nilai;
	}
	void printData();
};

void  Mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM :" << nim;
	cout << "\nNama :" << nama;
	cout << "\nNilai :" << nilai;
}

class mataKuliah {
private:
	string kode;
	string namaMK;
	int sks;

public:
	void inputMK() {
		cout << "\n\nMasukkan Kode matakuliah :";
		cin >> kode;
		cout << "Masukkan Nama matakuliah :";
		cin >> namaMK;
		cout << "Masukkan sks :";
		cin >> sks;
	}

	void tampil() {
		cout << "\nData Matakuliah";
		cout << "\nKode Matakuliah :" << kode;
		cout << "\nNama	Matakuliah :" << namaMK;
		cout << "\nSks Matakuliah :" << sks;

	}
};

int main() {
	Mahasiswa mhs;
	mataKuliah mk;

	mhs.input();
	mhs.printData();

	mk.inputMK();
	mk.tampil();
}