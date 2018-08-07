//Fibonacci series - Recursive solution
//Date - 7-Aug-2018

#include<stdio.h>

int fib(int n)
{
	if(n<=1) return n;
	else 
		return fib(n-1) + fib(n-2);
}

int main()
{
	int n = 10;
	printf("Fib 10th number : %d", fib(n));
	return 0;
}
