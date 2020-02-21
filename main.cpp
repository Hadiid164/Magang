/* File      : main.cpp */
/* Tanggal   : 21 Februari 2020 */
/* Topik     : Tugas cakru programming pandago pertama */

#include <stdio.h>
#include "bebas.h"

int main() {
    /* KAMUS */
    int input_1, input_2, input_3;

    /* ALGORITMA */
    printf("Masukan input pertama : ");
    scanf("%d", &input_1);
    printf("Masukan input kedua   : ");
    scanf("%d", &input_2);
    printf("Masukan input ketiga  : ");
    scanf("%d", &input_3);

    PrintHaiNTimes(input_1);
    GanjilOrGenap(input_2);

    printf("Hasil perhitungan deret = %d\n", DeretArit50());

    ModNumber(input_1, input_2);

    printf("Hasil perhitungan fungsi kelima = %d\n", TambahOrKurang(input_3, input_1, input_2));

    if (IsPrima(input_3)) {
        printf("%d adalah bilangan prima\n", input_3);
    } else /* !IsPrima(input_3) */ {
        printf("%d bukan bilangan prima\n", input_3);
    }

    return 0;
}