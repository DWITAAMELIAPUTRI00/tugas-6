// Nama :Dwita Amelia Putri Nim:2401210069
#include <stdio.h>
#include <string.h>

int main() {
    char nama[50], kode_jabatan[10], ulang;
    int golongan, gaji, tunjangan, pinjaman = 0;
    float pajak, total_gaji_kotor, total_gaji_bersih;

    
    printf("== PROGRAM PERHITUNGAN GAJI PEGAWAI PT. TELKOMSEL ==\n");

    do {
        // Input Nama Pegawai
        printf("Masukkan Nama Pegawai: ");
        scanf("%s", nama);

        // Input Golongan
        printf("Masukkan Golongan (1, 2, 3, 4, 5, atau 6): ");
        scanf("%d", &golongan);

        // Menentukan gaji berdasarkan golongan
        switch (golongan) {
            case 1:
                gaji = 500000;
                break;
            case 2:
                gaji = 7500000;
                break;
            case 3:
                gaji = 1000000; 
                break;
            case 4:
                gaji = 1500000;   
                break;
            case 5:
                gaji = 1750000;
                break;
            case 6:
                gaji = 2500000;
                break;
            default:
                printf("Golongan tidak valid.\n");
                return 1; // Program berhenti jika golongan tidak valid
        }

        // Input Kode Jabatan
        printf("Masukkan Kode Jabatan (Dir/Sec/Wak/Staf): ");
        scanf("%s", kode_jabatan);

        // Menentukan tunjangan kode jabatan
        if (strcmp(kode_jabatan, "Dir") == 0) {
            tunjangan = 450000; // Tunjangan Direktur
        } else if (strcmp(kode_jabatan, "Sec") == 0) {
            tunjangan = 300000; // Tunjangan Sekretaris
        } else if (strcmp(kode_jabatan, "Wak") == 0) {
            tunjangan = 375000; // Tunjangan Wakil Direktur
        } else if (strcmp(kode_jabatan, "Staf") == 0) {
            tunjangan = 200000; // Tunjangan Staf Administrasi
        } else {
            printf("Kode jabatan tidak valid.\n");
            return 1; // Program berhenti jika kode jabatan tidak valid
        }

        // Input Pinjaman (jika ada)
        printf("Masukkan Pinjaman (Jika Tidak Ada, Ketik 0): ");
        scanf("%d", &pinjaman);

        // Menghitung Pajak (5% dari gaji pokok)
        pajak = 0.05 * gaji;

        // Menghitung Total Gaji Kotor (Gaji Pokok + Tunjangan)
        total_gaji_kotor = gaji + tunjangan;

        // Menghitung Total Gaji Bersih (Gaji Kotor - Pajak - Pinjaman)
        total_gaji_bersih = total_gaji_kotor - pajak - pinjaman;

        // Menampilkan hasil perhitungan
        printf("\n== RINCIAN GAJI ==\n");
        printf("Nama Pegawai: %s\n", nama);
        printf("Golongan: %d\n", golongan);
        printf("Gaji Pokok: Rp %d\n", gaji);
        printf("Tunjangan: Rp %d\n", tunjangan);
        printf("Pinjaman: Rp %d\n", pinjaman);
        printf("Pajak (5%%): Rp %.2f\n", pajak);
        printf("Total Gaji Kotor: Rp %.2f\n", total_gaji_kotor);
        printf("Total Gaji Bersih: Rp %.2f\n", total_gaji_bersih);

        // Menanyakan apakah ingin menghitung gaji lagi
        printf("\nMasih ingin menghitung gaji lagi? (Y/T): ");
        scanf(" %c", &ulang); // Spasi sebelum %c untuk menangkap karakter newline

    } while (ulang == 'Y' || ulang == 'y');

    printf("\nTerima kasih telah menggunakan program ini.\n");
    return 0;
}