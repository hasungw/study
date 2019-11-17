#include <stdio.h>

int main(void)
{
	printf( "recomment\n" );
	int i = 0;
	while ( i <= 9 )
	{
		int j = 1;
		while ( j <= 9 )
		{
			printf( "%d x %d = %d\n", i, j, i*j );
			j++;		
		}
		printf( "===============================\n" );
		i++;	
	}
	return 1;
}
