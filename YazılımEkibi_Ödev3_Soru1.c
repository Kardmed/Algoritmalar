#include <iostream>

int main()
{

	enum cevap{sağ=1, sol=2 };
	int matrices[7][7];

	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 3; j++)
		{

			printf("Enter your matrices[%d][%d] element\n", i + 1, j + 1);
			scanf_s("%d", &matrices[i][j]);

		}

	}
	printf("NORMALL MATRIX\n");
	for (int i = 0; i < 3; i++)// Normal Matris Görünümü
	{

		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", matrices[i][j]);

		}
		printf("\n");
	}
	int b;
	printf("If you wanna rotate left enter 1 ıf you wanna rotate right enter 2\n");
	scanf_s("%d", &b);
	if(sol==b){
		printf("Rotating left...\n");

		
		for (int i = 0; i < 3 ; i++) {
			for (int j = 2; j >= 0; j--) {

				printf("%d\t", matrices[j][i]);
			}
			printf("\n");
		}
	}
	if (b == sağ) {
		printf("Rotating right...\n");


		for (int i = 2; i >= 0; i--) {
			for (int j = 0; j <= 2; j++) {

				printf("%d\t", matrices[j][i]);
			}
			printf("\n");
		}
	}

	else {
		printf("Enter correct value .");
		while (b != sol || b != sağ)//istediğimiz girdiyi alna kadar döngü
		{
			printf("If you wanna rotate left enter 1 ıf you wanna rotate right enter 2\n");
			scanf_s("%d", &b);
			if (sol == b) {
				printf("Rotating left...\n");


				for (int i = 0; i < 3; i++) {
					for (int j = 2; j >= 0; j--) {

						printf("%d\t", matrices[j][i]);
					}
					printf("\n");
				}
				break;
			}
			if (b == sağ) {
				printf("Rotating right...\n");


				for (int i = 2; i >= 0; i--) {
					for (int j = 0; j <= 2; j++) {

						printf("%d\t", matrices[j][i]);
					}
					printf("\n");
				}
				break;
			}
		}
	}


}
