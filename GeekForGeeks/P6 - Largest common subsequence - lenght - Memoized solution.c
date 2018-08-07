//Largest common subsequence - lenght - Memoized solution
//Date - 7-Aug-2018

#include<stdio.h>

char *A;
char *B;
int m, n;
int array[100][100];

int max(int a, int b)
{
	return a > b ? a : b;
}

int subproblem(int i, int j)
{
	if(array[i][j] == -1)
	{
		if(A[i]=='\0' || B[j]=='\0') 	
			array[i][j] = 0;
		else if(A[i]==B[j])	
			array[i][j] = 1 + subproblem(i + 1, j + 1);
		else
			array[i][j] = max(subproblem(i + 1, j), subproblem(i, j + 1));
	}
	
	return array[i][j];
}

int lcs_length(char *AA, char *BB)
{
	A = AA;
	B = BB;
	m = strlen(A);
	n = strlen(B);
	int i,j;
	for(i = 0; i <= m; i++)
	{
		for(j = 0; j <=n ; j++)
		{
			array[i][j] = -1;
		}
	}
	
	return subproblem(0, 0);
}

int main()
{
	char *str1 = "Hello World!";
	char *str2 = "Love, thy lord!";
	printf("LCS size = %d", lcs_length(str1, str2));
	return 0;
}
