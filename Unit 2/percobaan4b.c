#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

//Loop pertama berjalan dua kali, nilai awal i adalah 2 dan batas atasnya adalah 3. Setiap kali loop berjalan nilai i akan bertambah satu (++i).
// Loop kedua berjalan dua kali untuk setiap iterasi dari loop pertama. Nilai awal j adalah 1 dan batas atasnya adalah 2. Setiap kali loop berjalan nilai j akan bertambah satu (++j).
//Setiap iterasi loop kedua akan mencetak nilai j sebagai "Bilangan pengali" dan hasil perkalian dari i \* j sebagai "Hasil perkalian".
// program ini mencetak hasil perkalian dari bilangan utama (2 dan 3) dengan bilangan pengali (1 dan 2).