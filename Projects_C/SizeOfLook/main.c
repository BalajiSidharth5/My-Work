#include <stdio.h>

int main(int argc, char **argv)
{
	printf("size of int: %lu\n" , sizeof(int)); 
    printf("size of char: %lu\n" , sizeof(char));
    printf("size of long: %lu\n" , sizeof(long));
    printf("size of long long: %lu\n" , sizeof(long long));
    printf("size of double: %lu\n" , sizeof(double));
    printf("size of long double: %lu\n" , sizeof(long double));
    //%lu and %zd both work
    
	return 0;
}
