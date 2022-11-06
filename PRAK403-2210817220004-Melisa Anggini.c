#include <stdio.h>
int main()
{
    int bil1, bil2, a, b;
    scanf("%d %d", &bil1, &bil2);
    if(bil1<bil2){
    for(a=bil1, b=bil2; a<=bil2, b>=bil1; a++, b--){
        printf("%d %d", a, b);
        if(a == bil2){
            break;}
        else{
            printf(" - ");}
        }
    }
    else{
    for(a=bil1, b=bil2; a>=bil2, b<=bil1; a--, b++){
        printf("%d %d", a, b);
        if(b == bil1){
            break;}
        else{
            printf(" - ");}
    }
    }
}
