/*
    1.  Saya memiliki angka acak 1,4,5,3,2,8
        Tolong urutkan dengan metode sorting
*/


#include<iostream>
#include<stdio.h>

int main(){
    int a,b,c,d,e,jumlah;
    int nilai[6];
    
printf("------ PROGRAM SORTING ------ \n\n");
printf("Input Random Nilai Sebanyak 6 kali \n");
    for (a=0; a<=5; a++){
        printf("Nilai ke [%d] : ",a+1);
        scanf("%d",&nilai[a]);
    }
    printf("\nNilai masukan User\n");
    for (b=0; b<=5; b++){
        printf("%d, ",nilai[b]);
    }
    printf("\n\nHasil Urut dari kecil ke besar \n");
    for (c=0; c<=5; c++){
        for (d=c+1; d<=5; d++) {
            if (nilai[c]>nilai[d]){
                jumlah=nilai[c];
                nilai[c]=nilai[d];
                nilai[d]=jumlah;
            }
        }
    }
    for (e=0; e<=5; e++){
        printf("%d, ",nilai[e]);
    }
    return 0;
}
