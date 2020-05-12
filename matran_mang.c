#include <stdio.h>
#include <stdlib.h>

void nhapMaTran(int arr[], int row, int col);
void bieuDienMaTran(int arr[], int row, int col);

int main()
{
	/* begin: get row and column size from user input */
	int row, col ;
	printf("Nhap so luong hang: ");
	scanf("%d", &row);
	printf("Nhap so luong cot: ");
	scanf("%d", &col);
	/* end: get row and column size from user input */

	/* declare number of all number in matrix */
	int size = row * col;
	int *arr;

	/* dynamic allocate array with size =  row * col */
	arr=(int *)malloc(size*sizeof(int));

	nhapMaTran(arr, row, col);
	bieuDienMaTran(arr, row, col);

	free(arr);
	system("pause");
	return 0;
}

void nhapMaTran(int arr[], int row, int col)
{

	int count=0; 
	printf("\nhap cac gia tri: ");

	for (int i = 1; i <= row; ++i)
	{
		printf("\nNhap dong %d cua ma tran: ", i);
		for(int j = 1; j <= col; ++j)
		{
			printf("\nNhap so thu %d cua dong  %d: ", j, i);
			scanf("%d", &arr[count]);
			count++;
		}
	}
}

void bieuDienMaTran(int arr[], int row, int col)
{

	int count=0; 
	printf("\nMa Tran: \n");

	for (int i = 1; i <= row; ++i)
	{
		for(int j = 1; j <= col; ++j)
		{
			printf("%d ", arr[count]);
			count++;
		}
		printf("\n");
	}
}
