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

	char letter;
	int sum, valid_flag;

	printf("(>>>) \t Masukan karakter (X, Z, & A)  : . . . "); 
	scanf_s("%c", &letter);

	switch (letter) {
		case 'X': 
			sum = 0;
			printf("(>) \t Sum = %d", sum);
			printf("\n\n");
			getch();
			break;
		case 'Z': 
			valid_flag = 1;
			printf("(>) \t Valid Flag = %d", valid_flag);
			printf("\n\n");
			getch();
			break; 
		case 'A': 
			sum = 1;
			printf("(>) \t Sum = %d", sum);
			printf("\n\n");
			getch();
			break; 
		default:
			printf("\n(>) \t Unknown Letter???? --> %c \n", letter);
			printf("(>) \t Harus huruf Kapital, Tryagain...\n");
			getch();
			system("cls");
			getch();
			exit(main());
	}

}
