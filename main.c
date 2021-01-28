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
    printf("ORIGINAL: %d\n", memcmp("", "", 4));
    printf("YOUR'S  : %d\n", ft_memcmp("", "", 4));
    printf("ORIGINAL: %d\n", memcmp(arr, arr2, 15));
    printf("YOUR'S  : %d\n", ft_memcmp(arr, arr2, 15));
    printf("ORIGINAL: %d\n", memcmp("Xa", "Aa", 2));
    printf("YOUR'S  : %d\n", ft_memcmp("a", "Aa", 2));
    printf("ORIGINAL: %d\n", memcmp("Good morning Vietnam", "Good morning Saigon", 10));
    printf("YOUR'S  : %d\n", ft_memcmp("Good morning Vietnam", "Good morning Saigon", 10));

    puts("\n*********************************");
    printf("ft_memset\n");
    printf("ORIGINAL: %s\n", memset(arr, '$', 4));
    printf("YOUR'S  : %s\n", ft_memset(arr, '$', 4));

    puts("\n*********************************\n");
    printf("ft_strchr\n");
    printf("ORIGINAL: %s\n", strchr("Yocogama", 'g'));
    printf("YOUR'S  : %s\n", ft_strchr("Yocogama", 'g'));
    printf("ORIGINAL: %s\n", strchr("Yocogama", '\0'));
    printf("YOUR'S  : %s\n", ft_strchr("Yocogama", '\0'));

    puts("\n*********************************");
    char strlcatarr[7] = "Good";
    char strlcatarr2[7] = "Good";
    char *sp = "Bad";
    char *sp2 = "Sad";
    printf("ft_strlcat\n");
    printf("%zu\n", strlcat(strlcatarr, "Day", 7));
    printf("%zu\n", ft_strlcat(strlcatarr2, "Day", 7));
    printf("ORIGINAL: %s\n", strlcatarr);
    printf("YOUR'S  : %s\n", strlcatarr2);

    printf("ORIGINAL: %zu\n", strlcat(sp, "Bcb", 3));
    printf("YOUR'S  : %zu\n", ft_strlcat(sp2, "Bcd", 3));

    puts("\n*********************************\n");
    printf("ft_strnstr\n");
    printf("ORIGINAL: %s\n", strnstr("Globus", "bus", 6));
    printf("YOUR'S  : %s\n", ft_strnstr("Globus", "bus", 6));
    printf("ORIGINAL: %s\n", strnstr("Globus", "bus", 4));
    printf("YOUR'S  : %s\n", ft_strnstr("Globus", "bus", 4));
    printf("ORIGINAL: %s\n", strnstr("Drama", "Cine", 5));
    printf("YOUR'S  : %s\n", ft_strnstr("Drama", "Cine", 5));
    printf("ORIGINAL: %s\n", strnstr("Drama", "Dra", 5));
    printf("YOUR'S  : %s\n", ft_strnstr("Drama", "Dra", 5));

    puts("\n*********************************\n");
    printf("ft_strrchr\n");
    printf("ORIGINAL: %s\n", strrchr("Syru$", '$'));
    printf("YOUR'S  : %s\n", ft_strrchr("Syru$", '$'));
    printf("ORIGINAL: %s\n", strrchr("Syru$", 'S'));
    printf("YOUR'S  : %s\n", ft_strrchr("Syru$", 'S'));
    printf("ORIGINAL: %s\n", strchr("Syru$", '\0'));
    printf("YOUR'S  : %s\n", ft_strchr("Syru$", '\0'));

    return (0);
}
