

#include <iostream>

int main()
{
	int matrices[7][7];

	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 4; j++)
		{

			printf("Enter your matrices[%d][%d] element\n", i + 1, j + 1);
			scanf_s("%d", &matrices[i][j]);

		}

	}
	printf("Normal Matris\n");
	for (int i = 0; i < 4; i++)// Normal Matris Görünümü
	{

		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", matrices[i][j]);

		}
		printf("\n");
	}

		int filter[7][7];

		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)
			{

				printf("Enter your filter[%d][%d] element\n", i + 1, j + 1);
				scanf_s("%d", &filter[i][j]);

			}

		}
		int top = 0;
		printf("Filter\n");
		for (int i = 0; i < 3; i++)// Normal Matris Görünümü
		{

			for (int j = 0; j < 3; j++)
			{
				printf("%d\t", filter[i][j]);
				top += filter[i][j];
			}
			printf("\n");
		}
			int result[2][2];
		
			
			printf("Your filter =%d \n", top);
			int temp = 0;
			for (int i = 0; i < 3; i++)// 0 a 0 ı bulamk için
			{

				for (int j = 0; j < 3; j++)
				{
					int men = filter[i][j];
					int men1 = matrices[i][j];
					 temp += men1 * men;

				}

			}
			result[0][0] = { temp / top };
			printf("result[0][0]= %d\n", result[0][0]);
			int temp1 = 0;
			for (int i = 0; i < 3; i++)// 0 a 1 ı bulamk için
			{

				for (int j = 0; j < 3; j++)
				{
					int men = filter[i][j];
					int men1 = matrices[i][j+1];// 1 sürütn kaydırarak filtre eklendiği için
					temp1 += men1 * men;

				}

			}
			result[0][1] = {temp1 / top};
			printf("result[0][1]= %d\n", result[0][1]);
			
			int temp2 = 0;
			for (int i = 0; i < 3; i++)// 1 e 0 ı bulamk için
			{

				for (int j = 0; j < 3; j++)
				{
					int men = filter[i][j];//4 e kadar element olmadığı için
					int men1 = matrices[i+1][j];
					temp2 += men1 * men;

				}

			}
			result[1][0] = { temp2 / top };
			printf("result[1][0]= %d\n", result[1][0]);
			int temp3 = 0;
			for (int i = 0; i < 3; i++)// 1 e 0 ı bulamk için
			{

				for (int j = 0; j < 3; j++)
				{
					int men = filter[i][j];
					int men1 = matrices[i + 1][j+1];
					temp3 += men1 * men;

				}

			}
			result[1][1] = { temp3 / top };
			printf("result[1][1]= %d\n", result[1][1]);
			
			for (int i = 0; i < 2; i++)
			{

				for (int j = 0; j < 2; j++)
				{
					printf("%d\t", result[i][j]);
					
				}
				printf("\n");
			}
		}
	
