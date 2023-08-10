#include <stdio.h>

int main() {
    // Soal Latihan 1 Praktikum No 2
    int x[5] = {15, 21, 4, 6, 2}; // Mendeklarasikan setiap nilai array 
    int temp; // Membuat penyimpanan data sementara
    
    // Mencetak nilai array awal
    printf("Array awal :\n"); // Cetak Array Awal
    for(int i = 0; i < 5; i++){ // Perulangan mencetak array awal jika indeksnya < 5
        printf("%d, ", x[i]); // Cetak hasil dari array awal
    }

    // Mengurutkan elemen pada array dari terkecil hingga terbesar
    for(int i = 0; i < 5; i++){ // Perulangan mengurutkan array jika indeksnya < 5
        for(int j = i + 1; j < 5; j++){ // Perulangan membandingkan i dengan angka lainnya
            if(x[i] > x[j]) { // Buat kondisi pembanding nilai i lebih kecil dari j
                temp = x[i]; // Nilai dari x[i] akan disimpan sementara
                x[i] = x[j]; // Nilai dari x[i] akan dibawa ke x[j]
                x[j] = temp; // Nilai dari temp akan mengembalikan x[j] 
            }
        }
    }
    
    // Mencetak nilai array yang telah diurutkan
    printf("\nArray yang telah diurutkan :\n"); // Mencetak Array yang telah diurutkan
    for(int i = 0; i < 5; i++){ // Perulangan mencetak array awal jika indeksnya < 5
        printf("%d, ", x[i]); // Cetak hasil array yang telah diurutkan
    }
    
    return 0; // Program selesai
}
