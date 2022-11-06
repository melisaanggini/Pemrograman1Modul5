#include <stdio.h>
int main()
{
    int opsi;
    float x, y, hh;
    while(opsi != 5){
    printf("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
    printf("Masukkan Pilihan : ");
    scanf("%d", &opsi);
    if(opsi>5 || opsi<=0){
        printf("Input anda salah, silahkan coba lagi\n\n");}
    else if(opsi==5){
        printf("Terima kasih, telah menggunakan kalkulator MELISA ANGGINI\n");}
    else{
        printf("Masukkan nilai pertama : "); scanf("%f",&x);
        printf("Masukkan nilai kedua : "); scanf("%f",&y);
        if (opsi == 1){
            hh = x + y;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", x, y, hh);}
        else if (opsi == 2){
            hh = x - y;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", x, y, hh);}
        else if (opsi == 3){
            hh = x * y;
            printf("Hasil perkalia antara %.2f dengan %.2f adalah %.2f\n\n",x,y,hh);}
        else{
            hh = x / y;
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n",x,y,hh);}
    }
    }
}
