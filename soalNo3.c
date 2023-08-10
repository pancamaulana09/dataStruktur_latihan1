#include <stdio.h>

int main() {
    // Soal Latihan 1 Praktikum No 3
    int arr[3][2] = {{3,6},{9,8},{15,10}}; // Deklarasikan nilai Array
    int target; // Buat variabel untuk mencari data
    int found = 0; // Buat variabel kondisi jika data ditemukan dengan nilai false
    int i, j; // Buat dua variabel baris dan kolom array

    // Mencetak array awal
    printf("Array : "); // Mencetak array
    for (i = 0; i < 3; i++){ // Melakukan perulangan baris array jika indeks < 3 
        for (j = 0; j < 2; j++){ // Melakukan perulangan kolom array jika indeks < 2
            printf("%d ,", arr[i][j]); // Cetak nilai array
        }
    }

    // Mencari elemen pada indeks array
    printf("\nMasukkan elemen yang ingin dicari indeksnya : "); // Mencetak pencarian elemen pada indeks array
    scanf("%d", &target); // Menginputkan nilai elemen yang akan dicari, dan menyimpannya

    // Pencarian elemen pada indeks array
    for (i = 0; i < 3; i++){ // Perulangan baris elemen pada indeks jika indeks < 3
        for (j = 0; j < 2; j++){ // Perulangan kolom elemen pada indeks jika indeks < 2
            if (arr[i][j] == target){ // Pengkondisian jika indeks baris dan kolom sama dengan data yang dicari
                found = 1; // Jika data ditemukan, maka nilai found akan true
                break; // Lakukan break
            }
        }
        if (found) { // Jika data ditemukan, dan nilai found true
            break; // Maka lakukan break
        }
    }

    if (found) { // Jika data ditemukan, dan nilai found true
        printf("Elemen %d berada di index [%d][%d]\n", target, i, j); // Cetak baris dan kolom indeks dari elemen
    } else { // Jika data tidak ditemukan, dan nilai found masih false
        printf("Tidak ada elemen tersebut di dalam array\n"); // Cetak hasil bahwa elemen tidak ditemukan di array
    }

    return 0; // Program selesai
}
