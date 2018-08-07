//Largest common subsequence - lenght - Tabulated solution
//Date - 7-Aug-2018

#include<stdio.h>

int max(int a, int b)
{
	return a > b ? a : b;
}

int lcs_length(char *A, char *B)
{
	int m = strlen(A);
	int n = strlen(B);
	int i,j;
	int array[m + 1][n + 1];
	
	for(i = m; i >= 0; i--)
	{
		for(j = n; j >= 0; j--)
		{
			if(A[i]=='\0' || B[j]=='\0') 	
				array[i][j] = 0;
			else if(A[i]==B[j])	
				array[i][j] = 1 + array[i + 1][j + 1];
			else
				array[i][j] = max(array[i + 1][j], array[i][j + 1]);
		}
	}
	
	return array[0][0];
}

int main()
{
	char *str1 = "Hello World!";
	char *str2 = "Love, thy lord!";
	printf("LCS size = %d", lcs_length(str1, str2));
	return 0;
}
