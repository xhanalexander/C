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

	/*
	Jika variable flag sama dengan 1 atau variable letter bukan ‘X’, 
	maka assign nilai = 0 kepada variable exit_flag, jika tidak, 
	maka set exit_flag sama dengan 1.
	*/
	
	int flag, exit_flag, exit_flag2;
	char letter;

	printf("(>>>) \t Masukan Nilai Flag : . . . "); scanf_s("%d", &flag);
	printf("(>>>) \t Masukan Karakter Letter : . . . "); scanf_s(" %c", &letter);
	printf("\n\n");

	if ( (flag == 1) || (letter != "X")) {
		exit_flag = 0;

		printf("(1)\t Nilai Exit Flag = . . . %d", exit_flag);
		printf("\n\n");
		getch();

	} else(exit_flag = 1); {
		printf("(2)\t Nilai Exit Flag = . . . %d", exit_flag);
		printf("\n\n");
		getch();
	}

	getch();

}
