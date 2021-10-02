#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

int main() {
	SetConsoleTitle(TEXT("Praktikum Algoritma Program II"));

	printf("\n\n(O)\t Nama \t\t: Alexander Achmad Khan \n");
	printf("(O)\t NIM/NPM \t: 120103048 \n");
	printf("(O)\t Jurusan \t: Teknik Informatika \n");
	printf("(O)\t Kelas \t\t: Algoritma Pemrograman II \n\n");
	printf("================================================= \n\n");

	int Summary, total;
	printf("(>>>) Masukkan Nilai Jumlah :..."); scanf_s("%d", &Summary);
	printf("(>>>) Masukan Nilai Total :..."); scanf_s("%d", &total);

	if (Summary = 10 && total < 20) {
		printf("\n(>) Nilai Tidak sesuai!!! Coba Lagi...");
		getch();
		system("cls");
		exit(main());
	}

	printf("\n(>) Benar\n"); 
	getch();

}
