#include <iostream>
using namespace std;

int main() {
    string namaKaryawan;
    int golonganJabatan, pendidikan, jumlahJamKerja;
    double gajiPokok = 300000;
    double tunjanganJabatan = 0, tunjanganPendidikan = 0, honorLembur = 0;

    // Input data karyawan
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Karyawan: ";
    getline(cin, namaKaryawan);
    cout << "Golongan Jabatan (1/2/3): ";
    cin >> golonganJabatan;
    cout << "Pendidikan (1=SMA, 2=D1, 3=D3, 4=S1): ";
    cin >> pendidikan;
    cout << "Jumlah jam kerja: ";
    cin >> jumlahJamKerja;

    // Hitung tunjangan jabatan
    if (golonganJabatan == 1)
        tunjanganJabatan = 0.05 * gajiPokok;
    else if (golonganJabatan == 2)
        tunjanganJabatan = 0.1 * gajiPokok;
    else if (golonganJabatan == 3)
        tunjanganJabatan = 0.15 * gajiPokok;

    // Hitung tunjangan pendidikan
    switch (pendidikan) {
        case 1:
            tunjanganPendidikan = 0.025 * gajiPokok;
            break;
        case 2:
            tunjanganPendidikan = 0.05 * gajiPokok;
            break;
        case 3:
            tunjanganPendidikan = 0.2 * gajiPokok;
            break;
        case 4:
            tunjanganPendidikan = 0.3 * gajiPokok;
            break;
        default:
            cout << "Pendidikan tidak valid" << endl;
            return 1;
    }

    // Hitung honor lembur
    if (jumlahJamKerja > 8)
        honorLembur = (jumlahJamKerja - 8) * 3500;

    // Hitung total gaji
    double totalGaji = gajiPokok + tunjanganJabatan + tunjanganPendidikan + honorLembur;

    // Output hasil perhitungan
    cout << "\nSiswa yang bernama " << namaKaryawan << endl;
    cout << "Honor yang diterima" << endl;
    cout << "Tunjangan Jabatan Rp " << tunjanganJabatan << endl;
    cout << "Tunjangan Pendidikan Rp " << tunjanganPendidikan << endl;
    cout << "Honor Lembur Rp " << honorLembur << endl;
    cout << "+\n";
    cout << "Total Gaji Rp " << totalGaji << endl;

    return 0;
}
