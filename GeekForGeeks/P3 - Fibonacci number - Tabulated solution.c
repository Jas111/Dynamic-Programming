//Fibonacci number - Tabulated solution
//Date - 7-Aug-2018

#include<stdio.h>

int fib(int n)
{
	//Keep a table to store the computed results
	int table[n+1];
	int i;
	
	//We will fill all entries in lookup table starting from the one that we already know 
	//No need to initialise to NIl as we know what values will be taken for smallest subproblems
	table[0] = 0;
	table[1] = 1;
	for(i = 2; i <= n; i++)
	{
		table[i] = table[i-1] + table[i-2];
	}
	
	return table[n];
}

int main()
{
	int n = 10;
	printf("Fib 10th number : %d", fib(n));
	return 0;
}
