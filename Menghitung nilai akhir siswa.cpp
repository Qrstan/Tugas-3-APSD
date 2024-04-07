#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung nilai akhir
double hitungNilaiAkhir(double nilaiKeaktifan, double nilaiTugas, double nilaiUjian) {
    double nilaiMurniKeaktifan = nilaiKeaktifan * 0.20;
    double nilaiMurniTugas = nilaiTugas * 0.30;
    double nilaiMurniUjian = nilaiUjian * 0.50;
    return nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;
}

// Fungsi untuk menentukan grade
char tentukanGrade(double nilaiAkhir) {
    if (nilaiAkhir > 80) {
        return 'A';
    } else if (nilaiAkhir > 70) {
        return 'B';
    } else if (nilaiAkhir > 56) {
        return 'C';
    } else if (nilaiAkhir > 46) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    string namaSiswa;
    double nilaiKeaktifan, nilaiTugas, nilaiUjian;

    // Input data siswa
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Masukkan nama siswa: ";
    getline(cin, namaSiswa);
    cout << "Masukkan nilai keaktifan: ";
    cin >> nilaiKeaktifan;
    cout << "Masukkan nilai tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan nilai ujian: ";
    cin >> nilaiUjian;

    // Hitung nilai akhir
    double nilaiAkhir = hitungNilaiAkhir(nilaiKeaktifan, nilaiTugas, nilaiUjian);

    // Tampilkan nilai persentase masing-masing
    cout << "\nSiswa yang bernama " << namaSiswa << endl;
    cout << "Dengan Nilai Persentasi Yang dihasilkan." << endl;
    cout << "Nilai Keaktifan * 20% : " << nilaiKeaktifan * 0.20 << endl;
    cout << "Nilai Tugas * 30% : " << nilaiTugas * 0.30 << endl;
    cout << "Nilai Ujian * 50% : " << nilaiUjian * 0.50 << endl;

    // Tampilkan hasil nilai akhir dan grade
    cout << "Jadi Siswa yang bernama " << namaSiswa << " memperoleh nilai akhir sebesar " << nilaiAkhir << " dengan grade " << tentukanGrade(nilaiAkhir) << endl;

    return 0;
}
