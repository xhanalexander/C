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

	int Total, X;
	Total = 65;

	printf("(>>>)\t Masukan nilai..."); scanf_s("%d", &X);

	if (X < Total) {
		printf("(>>>)\t Maaf anda harus mencoba lagi!!!\n\n");
		getch();
		system("cls");
		exit(main());
	} else if (X > Total ) {
		printf("(>>>)\t ya nilai tersebut diatas 65...!\n\n");
	} else if (X == Total) {
		printf("(>>>)\t ya nilai tersebut 65...!\n\n");
	}

	getch();
}
