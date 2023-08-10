#include <stdio.h>

int main() {
    // Soal Latihan 1 Praktikum No 5
    int lantai[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Deklarasikan setiap lantai dalam array
    int pilihan, a; // Deklarasikan variabel pemilihan lantai, dan variabel a

    printf("Masukkan nomor lantai: "); // Cetak kalimat input lantai
    scanf("%d", &pilihan); // Input angka lantai dan simpan

    for (a = 0; a < 5; a++) // Perulangan a untuk mendefinisikan 5 angka yang akan muncul
    {
        if (pilihan >= 1 && pilihan <= 3){ // Jika memilih lantai 1 - 3
            printf("%d ", lantai[a]); // Maka akan memunculkan 5 angka yang sama (1,2,3,4,5)
        }
        else if (pilihan >= 4 && pilihan <= 7) // Jika memilih lantai 4 - 7
        {
            printf("%d ", lantai[a] + (pilihan - 3)); // Maka angka yang dipilih akan berada di tengah
        }
        else if (pilihan >= 8 && pilihan <= 10) // Jika memilih lantai 8 - 10
        {
            printf("%d ", lantai[a + 5]); // Maka memunculkan angka yang sama (6,7,8,9,10)
        }
        else
        {
            printf("Lantai yang anda masukkan tidak valid"); // Akan dicetak jika lantai tidak ditemukan
            break; // Dan akan berhenti
        }
    }
    
    return 0; // Program selesai
}
