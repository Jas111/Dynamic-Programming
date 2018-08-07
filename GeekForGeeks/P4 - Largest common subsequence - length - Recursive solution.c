//Largest common subsequence - length - Recursive solution
//Date - 7-Aug-2018

#include<stdio.h>

int max(int a, int b)
{
	return a > b ? a : b;
}

int lcs_length(char *A, char *B)
{
	if(*A=='\0' || *B=='\0') 	
		return 0;
	else if(*A==*B)	
		return 1 + lcs_length(A + 1, B + 1);
	else
		return max(lcs_length(A + 1, B), lcs_length(A, B + 1));
}

int main()
{
	char *A = "Hello World!";
	char *B = "Love, thy lord!";
	printf("LCS size = %d", lcs_length(A, B));
	return 0;
}
