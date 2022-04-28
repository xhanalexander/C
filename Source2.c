#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

int main() {
	SetConsoleTitle(TEXT("Praktikum Algoritma Program II"));

	printf("\n\n(O)\t Nama \t\t: ... \n");
	printf("(O)\t NIM/NPM \t: ... \n");
	printf("(O)\t Jurusan \t: Ilmu Komputer \n");
	printf("(O)\t Kelas \t\t: Algoritma Pemrograman II \n\n");
	printf("================================================= \n\n");

	int total, guess;
	printf("(>>>) Masukan nilai total :..."); scanf_s("%d", &total);
	printf("(>>>) Masukan nilai tebak :..."); scanf_s("%d", &guess);

	if (total = guess) {
		printf("(>) Total adalah...%d", total);
		printf("\n");
		getch();
	} else {
		printf("(>) Total adalah...%d", guess);
		printf("\n");
		getch();
	}


}
