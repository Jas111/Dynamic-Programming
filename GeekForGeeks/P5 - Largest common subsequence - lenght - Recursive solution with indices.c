//Largest common subsequence - lenght - Recursive solution with indices
//Date - 7-Aug-2018

#include<stdio.h>

char *A;
char *B;

int max(int a, int b)
{
	return a > b ? a : b;
}

int subproblem(int i, int j)
{
	if(A[i]=='\0' || B[j]=='\0') 	
		return 0;
	else if(A[i]==B[j])	
		return 1 + subproblem(i + 1, j + 1);
	else
		return max(subproblem(i + 1, j), subproblem(i, j + 1));
}

int lcs_length(char *AA, char *BB)
{
	A = AA;
	B = BB;
	
	return subproblem(0, 0);
}

int main()
{
	char *str1 = "Hello World!";
	char *str2 = "Love, thy lord!";
	printf("LCS size = %d", lcs_length(str1, str2));
	return 0;
}
