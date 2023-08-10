#include <stdio.h>

int main() {
// Soal Latihan 1 Praktikum No 1
int x[3][2]; // Mendeklarasikan variabel array x
int i, j; // Membuat variabel baris dan kolom untuk baris dan kolomnya

// Mengisi nilai pada array x menggunakan perulangan
int nilai[] = {3, 6, 9, 8, 15, 10}; // Mendeklarasikan setiap nilai array
int k = 0; // Nilai elemen array x diisi dengan nilai pada array nilai, yang diakses menggunakan variabel k
for(i = 0; i < 3; i++) { // Perulangan untuk mengisi baris jika indeksnya < 3
    for(j = 0; j < 2; j++) { // Perulangan untuk mengisi kolom indeksnya < 2
        x[i][j] = nilai[k]; // Array x didefinisikan sebagai array nilai[k]
        k++; // Incremen pada k
    }
}

// Menampilkan nilai pada array x
for (i = 0; i < 3; i++){ // Perulangan untuk mencetak baris jika indeksnya < 3
    for (j = 0; j < 2; j++) // Perulangan untuk mencetak kolom indeksnya < 2
    {
        printf("Nilai array x[%d][%d] adalah : %d\n", i,j,x[i][j]);
        // Cetak baris dan kolom nilai array x yang dicari menggunakan printf
    }
}

return 0; // Program selesai
}
