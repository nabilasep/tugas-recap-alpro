#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}

// program diatas bekerja dengan pertama mendefinisikan max person 3 dan max lenght 20
// setelah itu membuat array char names dengan panjang 3 dan panjang char 20
// selanjutnya membuat array ages dengan panjang 3
// print name, lalu tab 2 kali, lalu age
// looping for untuk mengulang cetakan 3 kali menampilkan names dan ages