#include <iostream>
using namespace std;

struct Zodiak {
    string nama;
    int hari_mulai, bulan_mulai;
    int hari_akhir, bulan_akhir;
};

string cariZodiak(int hari, int bulan) {
    Zodiak zodiaks[12] = {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}
    };

    for (int i = 0; i < 12; i++) {
        if ((bulan == zodiaks[i].bulan_mulai && hari >= zodiaks[i].hari_mulai) ||
            (bulan == zodiaks[i].bulan_akhir && hari <= zodiaks[i].hari_akhir)) {
            return zodiaks[i].nama;
        }
    }

    return "Tidak Diketahui";
}

int main() {
    int tgl, bln, thn;

    cout << "Masukkan tanggal lahir Anda [Tanggal-Bulan-Tahun]: ";
    scanf("%d-%d-%d", &tgl, &bln, &thn);

    string zodiak = cariZodiak(tgl, bln);

    cout << "Tanggal Lahir Anda [Tanggal-Bulan-Tahun]: " << tgl << "-" << bln << "-" << thn << endl;
    cout << "Zodiak Anda adalah: " << zodiak << endl;

    return 0;
}
