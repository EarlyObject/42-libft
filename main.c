#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char arr[] = "Good morning Vietnam";
	char arr2[] = "Good morning Saigon";
    char numarr[] = "0246897531";
	

    puts("\n*********************************");
    printf("ft_atoi\n");
    printf("ORIGINAL: %d\n", atoi(numarr));
    printf("YOUR'S  : %d\n", ft_atoi(numarr));
    printf("ORIGINAL: %d\n", atoi(arr));
    printf("YOUR'S  : %d\n", ft_atoi(arr));

    puts("\n*********************************");
    printf("ft_bzero\n");
    bzero(arr, 4);
    printf("ORIGINAL: %c\n", arr[5]);
    ft_bzero(arr, 4);
    printf("YOUR'S  : %c\n", arr[5]);

    puts("\n*********************************");
    printf("ft_isalpha\n");
    printf("%s: %d\n", "ORIGINAL", isalpha('A'));
    printf("%s: %d\n", "YOUR'S  ", ft_isalpha('A'));
    printf("%s: %d\n", "ORIGINAL", isalpha('$'));
    printf("%s: %d\n", "YOUR'S  ", ft_isalpha('$'));

    puts("\n*********************************");
    printf("ft_memchar\n");
    printf("ORIGINAL: %p\n", memchr(arr, '$', 20));
    printf("YOUR'S  : %p\n", ft_memchr(arr, '$', 20));
    printf("ORIGINAL: %p\n", memchr(arr, 'V', 20));
    printf("YOUR'S  : %p\n", ft_memchr(arr, 'V', 20));

    puts("\n*********************************");
    printf("ft_memcmp\n");
	printf("ORIGINAL: %d\n", memcmp("", "",  4));
    printf("YOUR'S  : %d\n", ft_memcmp("","", 4));
	printf("ORIGINAL: %d\n", memcmp(arr, arr2,  15));
    printf("YOUR'S  : %d\n", ft_memcmp(arr, arr2,  15));
	printf("ORIGINAL: %d\n", memcmp("Xa", "Aa", 2));
    printf("YOUR'S  : %d\n", ft_memcmp("a","Aa", 2));
	printf("ORIGINAL: %d\n", memcmp("Good morning Vietnam", "Good morning Saigon", 10));
    printf("YOUR'S  : %d\n", ft_memcmp("Good morning Vietnam", "Good morning Saigon", 10));
	
	puts("\n*********************************");
    printf("ft_memset\n");
    printf("ORIGINAL: %s\n", memset(arr, '$', 4));
    printf("YOUR'S  : %s\n", ft_memset(arr, '$', 4));

	puts("\n*********************************");
	char strlcatarr[] = "Good";
	char strlcatarr2[] = "Good";
    printf("ft_strlcat\n");
	printf("ORIGINAL: %lu\n", strlcat("Aba", "Bcb", 3));
    printf("YOUR'S  : %lu\n", ft_strlcat("Aba", "Bcb", 3));
	/* strlcat(strlcatarr, "Day", 10);
	ft_strlcat(strlcatarr2, "Day", 10);
    printf("ORIGINAL: %s\n", strlcatarr);
	printf("YOUR'S  : %s\n", strlcatarr2); */

    return (0);
}
