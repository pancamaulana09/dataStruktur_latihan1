#include <stdio.h>

int main(){
    // Soal Latihan 1 Praktikum No 4
    int arr[70] = 
    {1,2,3,4,5,6,7,8,9,10,
    11,12,13,14,15,16,17,18,19,20,
    21,22,23,24,25,26,27,28,29,30,
    31,32,33,34,35,36,37,38,39,40,
    41,42,43,44,45,46,47,48,49,50,
    51,52,53,54,55,56,57,58,59,60,
    61,62,63,64,65,66,67,68,69,70}; // Deklarasi array dari 1 - 70

    int tambah = 0; // Deklarasi variabel penjumlahan 
    float rata2; // Deklarasi variabel untuk menghitung rata - rata 

    // Mencetak nilai array
    printf("array : "); // Cetak nilai Array
    for(int i = 0; i < 70; i++){ // Perulangan mencetak array jika indeksnya < 70
        printf("%d, ", arr[i]); // Cetak hasil dari array
    }
    
    // Mengisi array dengan nilai dari 1 hingga 70
    for(int i = 0; i < 70; i++){ // Perulangan array jika indeksnya < 70
        arr[i] = i+1; // Mengisi nilai i dari 1 hingga 70
    }
    
    // Menghitung jumlah seluruh elemen pada array
    for(int i = 0; i < 70; i++){ // Perulangan array jika indeksnya < 70
        tambah += arr[i]; // Menghitung jumlah seluruh elemen pada arr[i]
    }
    
    rata2 = (float)tambah / 70; // Menghitung rata-rata dari jumlah seluruh elemen pada array
    
    printf("\nrata - rata dari array tersebut adalah : %.2f\n", rata2); 
    // Mencetak nilai rata - rata jumlah semua elemen array 
    
    return 0; // Program selesai
}
