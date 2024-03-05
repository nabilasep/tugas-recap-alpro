#include <stdio.h>

int Transaksi, totalTransaksi, Pengeluaran;

int main()
{

    printf("berapa jumlah transaksi hari ini? : ");
    scanf("%d", &Transaksi);

    if (Transaksi <= 0)
    {
        printf("Tidak ada transaksi hari ini");
    }
    else
    {
        for (int i = 1; i <= Transaksi; i++)
        {
            printf("masukan nominal transaksi ke %d : ", i);
            scanf(" %d", &totalTransaksi);
            Pengeluaran += totalTransaksi;
        }
        printf("total pengeluaran hari ini : %d", Pengeluaran);
    }
}