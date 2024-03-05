#include <stdio.h>

int sisi;

int keliling(int sisi){
    return 4 * sisi;
}

int luas(int sisi){
    return sisi * sisi;
}

int volume(int sisi){
    return sisi * sisi * sisi;
}

int main(){
    printf("masukan sisi : ");
    scanf(" %d", &sisi);
    printf("keliling persegi : %d \n", keliling(sisi));
    printf("luas persegi : %d \n", luas(sisi));
    printf("volume kubus : %d \n", volume(sisi));
}