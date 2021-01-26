#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char arr[] = "Good morning Vietnam";
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
    printf("ft_memset\n");
    printf("ORIGINAL: %s\n", memset(arr, '$', 4));
    printf("YOUR'S  : %s\n", ft_memset(arr, '$', 4));

    return (0);
}
