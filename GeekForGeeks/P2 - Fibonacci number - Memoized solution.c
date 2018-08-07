//Fibonacci number - Memoized solution
//Date - 7-Aug-2018

#include<stdio.h>

#define NIL -1
#define MAX 100

//Keep a lookup table that stores the computed results of solved subproblems.
int lookup[MAX];

//Initialise the lookup tables to NIL value
void initialize()
{
	int i;
	for(i = 0; i < MAX; i++)
	{
		lookup[i] = NIL;
	}
}

int fib(int n)
{
	//Ckeck if lookup table has any value for 'n' entry
	if(lookup[n] == NIL)
	{
		//Else calculate the solutiona and store value for 'n' entry.
		if(n<=1)	lookup[n] = n;
		else
			lookup[n] = fib(n-1) + fib(n-2);
	}
	
	return lookup[n];
}

int main()
{
	int n = 10;
	initialize();
	printf("Fib 10th number : %d", fib(n));
	return 0;
}
