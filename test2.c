#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	for ( i = 2; i <i= 9; i++ )
	{
		for ( j = 1; j <= 9; j++ )
		{
			printf( "%d x %d = %d\n", i, j, i*j );
		}
		printf( "===============================\n" );
	}
	return 1;
}
