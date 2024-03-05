#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

//output :

// Masukan nama lengkap kamu:
// aa bb cc
// Halo aa bb cc

// perbedaan scanf dan fgets adalah scanf hanya mengambil kata pertama inputan, sedangkan fgets mengambil semua kata