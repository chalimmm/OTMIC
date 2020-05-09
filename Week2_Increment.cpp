#include<cstdio>
int main (){
	int bulan=5, tahun=2020;
	printf("%d %d\n", ++bulan, tahun++);
}
/*
Notes:

Pre-increment (++bulan) vs Post-increment (tahun++)
Keduanya memiliki tujuan sama yaitu increment nilai variabel
Hanya saja prosesnya yang berbeda, post-increment mengembalikan nilai variabel dulu, baru melakukan operasi increment
sedangkan pre-increment melakukan operasi increment dulu, baru mengembalikan nilai variabel

"Sama kayak kita ya, ditakdirkan satu tujuan walau berbeda jalannya. Eaak"
*/
