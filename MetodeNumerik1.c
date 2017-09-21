#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<math.h>

int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
int pangkat(int a, int b);
void Fungsi(int a, int b);
void menu();

//Algoritma
int main(){
	int a,b,pilih,hasil;
	
    printf("\nNIM	: 3411151162   ");
    printf("\nNama	: Mochammad Angga Fauzy   ");
	printf("\nKelas	: SIE C     ");
	printf("\nTugas	: Metode Numerik     \n\n");
	
	Home:
	menu();	
	printf("\n Masukkan Pilihan : "); scanf("%d", &pilih);
	switch(pilih){
	case 1:
   	system("cls");
		printf(" >>> Penjumlahan <<< ");
		printf("\n");
		printf("\nMasukkan Bilangan ke-1 : "); scanf("%d", &a);
		printf("Masukkan Bilangan ke-2 : "); scanf("%d", &b);
		hasil = tambah(a,b);
		printf("\nHasil Penjumlahannya Adalah : %d",hasil);
		
		getch();
		system("cls");
		goto Home;
		break;

    case 2:
   	system("cls");
		printf(" >>> Pengurangan <<< ");
		printf("\n");
		printf("\nMasukkan Bilangan ke-1 : "); scanf("%d", &a);
		printf("Masukkan Bilangan ke-2 : "); scanf("%d", &b);
		hasil = kurang(a,b);
		printf("\nHasil Pengurangannya Adalah : %d",hasil);
		
		getch();
		system("cls");
		goto Home;
		break;

    case 3:
   	system("cls");
		printf(" >>> Pembagian <<< ");
		printf("\n");
		printf("\nMasukkan Bilangan ke-1 : "); scanf("%d", &a);
		printf("Masukkan Bilangan ke-2 : "); scanf("%d", &b);
		hasil = bagi(a,b);
		printf("\nHasil Pembagiannya Adalah : %d",hasil);

		getch();
		system("cls");
		goto Home;
		break;

    case 4:
   	system("cls");
		printf(" >>> Perpangkatan <<< ");
		printf("\n");
		printf("\nMasukkan Bilangan : "); scanf("%d", &a);
		printf("Masukkan Pangkat : "); scanf("%d", &b);
		hasil = pangkat(a,b);
		printf("Hasil Pangkatnya Adalah : %d",hasil);

		getch();
		system("cls");
		goto Home;
		break;

    case 5:
   	system("cls");
		printf(" >>> Fungsi <<< ");
		printf("\n");
		printf("\nMasukkan Bilangan 1 : "); scanf("%d", &a);
		printf("Masukkan Bilangan 2 : "); scanf("%d", &b);
		Fungsi(a,b);
		printf("Hasilnya Adalah : 2x^2 - 4x+1 : %d", hasil);

		getch();
		system("cls");
		goto Home;
		break;
    }
}
//MENU
void menu(){
	int pilih;

	printf(">>>> MENU <<<<");
	printf("\n 1) Tambah");
	printf("\n 2) Kurang");
	printf("\n 3) Bagi");
	printf("\n 4) Pangkat");
	printf("\n 5) Fungsi");
}

//RUMUS
int tambah(int a, int b){
	int hasil;
	hasil = a + b;
	return(hasil);
}

int kurang(int a, int b){
	int hasil;
	hasil = a - b;
	return(hasil);
}

int bagi(int a, int b){
	int hasil;
	hasil = a / b;
	return(hasil);
}

int pangkat(int a, int b){
	int i,hasil;
	hasil=1;
	for(i=1;i<=b;i++){
		hasil=hasil*a;
	}
	return hasil;
}

void Fungsi(int a, int b){
	int q,hasil;
	for(q=a;q<=b;q++){
		hasil = (2*(q*q)) - ((4*q) + 1);
	}
}
