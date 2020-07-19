#include<stdio.h>

int N, X, kru, kalah;

int main (){
	printf("Banyak Kartu: ");
	scanf("%d", &N);
	while(N>2){
		printf("Lawan: ");
		scanf("%d", &X);
		N-=X;
		if(N<3){
			kalah=1;
			break;
		}
		printf("Na Ji-wook: ");
		if(N%12>9) kru=9;
		else if(N%12>7) kru=7;
		else if(N%12>5) kru=5;
		else kru=3;
		N-=kru;
		printf("%d\n", kru);
		printf("Sisa kartu: %d\n", N);
	}
	if(kalah) printf("Na Ji-wook kalah\n");
	else printf("Na Ji-wook menang\n");
}
