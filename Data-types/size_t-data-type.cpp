/* size_t is an unsigned integral data type  if the compiler is 32 bit then it is simply a typedef(i.e., alias) for 
unsigned int but if the compiler is 64 bit then it would be a typedef for unsigned long long. The size_t data type is
never negative. */

// C program to demonstrate that size_t or
// any unsigned int type should be used
// carefully when used in a loop.
#include<stdio.h>

#define N 10

int main()
{
	int a[N];

	// This is fine.
	for (size_t n = 0; n < N; ++n) {
		a[n] = n;
	}
		
	// But reverse cycles are tricky for unsigned
	// types as they can lead to infinite loops.
	for (size_t n = N-1; n >= 0; --n)
		printf("%d ", a[n]);
}
