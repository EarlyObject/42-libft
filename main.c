#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char arr[] = "Good morning Vietnam";
    char arr2[] = "Good morning Saigon";
    char numarr[] = "0246897531";

    puts("\n*********************************\n");
    printf("ft_atoi\n");
    printf("ORIGINAL: %d\n", atoi(numarr));
    printf("YOUR'S  : %d\n", ft_atoi(numarr));
    printf("ORIGINAL: %d\n", atoi(arr));
    printf("YOUR'S  : %d\n", ft_atoi(arr));
    printf("ORIGINAL: %d\n", atoi("2147483647"));
    printf("YOUR'S  : %d\n", ft_atoi("2147483647"));
    printf("ORIGINAL: %d\n", atoi("-2147483648"));
    printf("YOUR'S  : %d\n", ft_atoi("-2147483648"));
    printf("ORIGINAL: %d\n", atoi("2147483648"));
    printf("YOUR'S  : %d\n", ft_atoi("2147483648"));
    printf("ORIGINAL: %d\n", atoi("-2147483649"));
    printf("YOUR'S  : %d\n", ft_atoi("-2147483649"));

    puts("\n*********************************\n");
    printf("ft_bzero\n");
    bzero(arr, 4);
    printf("ORIGINAL: %c\n", arr[5]);
    ft_bzero(arr, 4);
    printf("YOUR'S  : %c\n", arr[5]);

    puts("\n*********************************\n");
    printf("ft_isalnum\n");
    printf("ORIGINAL: %d\n", isalnum('A'));
    printf("YOUR'S  : %d\n", ft_isalnum('A'));
    printf("ORIGINAL: %d\n", isalnum('$'));
    printf("YOUR'S  : %d\n", ft_isalnum('$'));
    printf("ORIGINAL: %d\n", isalnum('0'));
    printf("YOUR'S  : %d\n", ft_isalnum('0'));

    puts("\n*********************************\n");
    printf("ft_isalpha\n");
    printf("ORIGINAL: %d\n", isalpha('A'));
    printf("YOUR'S  : %d\n", ft_isalpha('A'));
    printf("ORIGINAL: %d\n", isalpha('a'));
    printf("YOUR'S  : %d\n", ft_isalpha('a'));
    printf("ORIGINAL: %d\n", isalpha('$'));
    printf("YOUR'S  : %d\n", ft_isalpha('$'));

    puts("\n*********************************\n");
    printf("ft_isascii\n");
    printf("ORIGINAL: %d\n", isascii('.'));
    printf("YOUR'S  : %d\n", ft_isascii('.'));
    printf("ORIGINAL: %d\n", isascii('0x89'));
    printf("YOUR'S  : %d\n", ft_isascii('0x89'));

    puts("\n*********************************\n");
    printf("ft_isdigit\n");
    printf("ORIGINAL: %d\n", isdigit(0));
    printf("YOUR'S  : %d\n", ft_isdigit(0));
    printf("ORIGINAL: %d\n", isdigit('5'));
    printf("YOUR'S  : %d\n", ft_isdigit('5'));
    printf("ORIGINAL: %d\n", isdigit('K'));
    printf("YOUR'S  : %d\n", ft_isdigit('K'));
    printf("ORIGINAL: %d\n", isdigit('0'));
    printf("YOUR'S  : %d\n", ft_isdigit('0'));

    puts("\n*********************************\n");
    printf("ft_isprint\n");
    printf("ORIGINAL: %d\n", isprint(' '));
    printf("YOUR'S  : %d\n", ft_isprint(' '));
    printf("ORIGINAL: %d\n", isprint(31));
    printf("YOUR'S  : %d\n", ft_isprint(31));
    printf("ORIGINAL: %d\n", isprint(126));
    printf("YOUR'S  : %d\n", ft_isprint(126));
    printf("ORIGINAL: %d\n", isprint(128));
    printf("YOUR'S  : %d\n", ft_isprint(128));

    puts("\n*********************************\n");
    char mcarr[6] = "Hello";
    char mcarr2[6] = "Hello";
    printf("ft_memccpy\n");
    printf("ORIGINAL: %s\n", memccpy(mcarr, "Dalma", 'L', 5));
    printf("YOUR'S  : %s\n", ft_memccpy(mcarr2, "Dalma", 'L', 5));
    printf("ORIGINAL: %s\n", memccpy(mcarr, "Dalma", 'l', 5));
    printf("YOUR'S  : %s\n", ft_memccpy(mcarr2, "Dalma", 'l', 5));

    puts("\n*********************************\n");
    printf("ft_memchr\n");
    printf("ORIGINAL: %p\n", memchr(arr, '$', 20));
    printf("YOUR'S  : %p\n", ft_memchr(arr, '$', 20));
    printf("ORIGINAL: %p\n", memchr(arr, 'V', 20));
    printf("YOUR'S  : %p\n", ft_memchr(arr, 'V', 20));

    puts("\n*********************************\n");
    printf("ft_memcmp\n");
    printf("ORIGINAL: %d\n", memcmp("", "", 4));
    printf("YOUR'S  : %d\n", ft_memcmp("", "", 4));
    printf("ORIGINAL: %d\n", memcmp(arr, arr2, 15));
    printf("YOUR'S  : %d\n", ft_memcmp(arr, arr2, 15));
    printf("ORIGINAL: %d\n", memcmp("Xa", "Aa", 2));
    printf("YOUR'S  : %d\n", ft_memcmp("a", "Aa", 2));
    printf("ORIGINAL: %d\n", memcmp("Good morning Vietnam", "Good morning Saigon", 10));
    printf("YOUR'S  : %d\n", ft_memcmp("Good morning Vietnam", "Good morning Saigon", 10));

    puts("\n*********************************\n");
    char marr[6] = "Hello";
    char marr2[6] = "Hello";
    printf("ft_memcpy\n");
    printf("ORIGINAL: %s\n", memcpy(marr, "Jazz concert", 3));
    printf("YOUR'S  : %s\n", ft_memcpy(marr2, "Jazz concert", 3));
    ft_bzero(marr, 6);
    ft_bzero(marr2, 6);
    printf("ORIGINAL: %s\n", memcpy(marr, "Jazz concert", 6));
    printf("YOUR'S  : %s\n", ft_memcpy(marr2, "Jazz concert", 6));

    puts("\n*********************************\n");
    ft_bzero(marr, 6);
    ft_bzero(marr2, 6);
    printf("ft_memmove\n");
    printf("ORIGINAL: %s\n", memmove(marr, "Barra", 3));
    printf("YOUR'S  : %s\n", ft_memmove(marr2, "Barra", 3));
    printf("ORIGINAL: %s\n", memmove(marr, "Japonese", 5));
    printf("YOUR'S  : %s\n", ft_memmove(marr2, "Japonese", 5));

    puts("\n*********************************\n");
    printf("ft_memset\n");
    printf("ORIGINAL: %s\n", memset(arr, '$', 4));
    printf("YOUR'S  : %s\n", ft_memset(arr, '$', 4));

    puts("\n*********************************\n");
    printf("ft_strchr\n");
    printf("ORIGINAL: %s\n", strchr("Yocogama", 'g'));
    printf("YOUR'S  : %s\n", ft_strchr("Yocogama", 'g'));
    printf("ORIGINAL: %s\n", strchr("Yocogama", '\0'));
    printf("YOUR'S  : %s\n", ft_strchr("Yocogama", '\0'));

    puts("\n*********************************\n");
    char sarr[7] = "Good";
    char sarr2[7] = "Good";
    char *sp = "Bad";
    char *sp2 = "Sad";
    printf("ft_strlcat\n");
    printf("ORIGINAL: %zu\n", strlcat(sarr, "Day", 7));
    printf("YOUR'S  : %zu\n", ft_strlcat(sarr2, "Day", 7));
    printf("ORIGINAL: %s\n", sarr);
    printf("YOUR'S  : %s\n", sarr2);
    printf("ORIGINAL: %zu\n", strlcat(sp, "Dad", 3));
    printf("YOUR'S  : %zu\n", ft_strlcat(sp2, "Dad", 3));
    ft_bzero(sarr, 7);
    ft_bzero(sarr2, 7);
    ft_memset(sarr, 'A', 3);
    ft_memset(sarr2, 'A', 3);
    printf("ORIGINAL: %zu\n", strlcat(sarr, "Bcb", 7));
    printf("YOUR'S  : %zu\n", ft_strlcat(sarr2, "Bcb", 7));
    printf("ORIGINAL: %s\n", sarr);
    printf("YOUR'S  : %s\n", sarr2);

    puts("\n*********************************\n");
    printf("ft_strlcpy\n");
    printf("ORIGINAL: %zu\n", strlcpy(marr, "Sixty", 6));
    printf("YOUR'S  : %zu\n", ft_strlcpy(marr2, "Sixty", 6));
    printf("ORIGINAL: %zu\n", strlcpy(marr, "Sixteen", 6));
    printf("YOUR'S  : %zu\n", ft_strlcpy(marr2, "Sixteen", 6));
    printf("ORIGINAL: %s\n", marr);
    printf("YOUR'S  : %s\n", marr2);

    puts("\n*********************************\n");
    printf("ft_strlen\n");
    printf("ORIGINAL: %zu\n", strlen("Sixty"));
    printf("YOUR'S  : %zu\n", ft_strlen("Sixty"));
    printf("ORIGINAL: %zu\n", strlen(marr));
    printf("YOUR'S  : %zu\n", ft_strlen(marr));

    puts("\n*********************************\n");
    printf("ft_strncmp\n");
    printf("ORIGINAL: %d\n", strncmp("Adam", "Adan", 4));
    printf("YOUR'S  : %d\n", ft_strncmp("Adam", "Adan", 4));
    printf("ORIGINAL: %d\n", strncmp("Adam", "Adan", 3));
    printf("YOUR'S  : %d\n", ft_strncmp("Adam", "Adan", 3));
    printf("ORIGINAL: %d\n", strncmp("Adam", "Baba", 0));
    printf("YOUR'S  : %d\n", ft_strncmp("Adam", "Baba", 0));
    printf("ORIGINAL: %d\n", strncmp("", "", 4));
    printf("YOUR'S  : %d\n", ft_strncmp("", "", 4));

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

    puts("\n*********************************\n");
    printf("ft_tolower\n");
    printf("ORIGINAL: %c\n", tolower('Z'));
    printf("YOUR'S  : %c\n", ft_tolower('Z'));
    printf("ORIGINAL: %c\n", tolower('y'));
    printf("YOUR'S  : %c\n", ft_tolower('y'));
    printf("ORIGINAL: %c\n", tolower('$'));
    printf("YOUR'S  : %c\n", ft_tolower('$'));

    puts("\n*********************************\n");
    printf("ft_toupper\n");
    printf("ORIGINAL: %c\n", toupper('a'));
    printf("YOUR'S  : %c\n", ft_toupper('a'));
    printf("ORIGINAL: %c\n", toupper('B'));
    printf("YOUR'S  : %c\n", ft_toupper('B'));
    printf("ORIGINAL: %c\n", toupper('.'));
    printf("YOUR'S  : %c\n", ft_toupper('.'));

    return (0);
}
