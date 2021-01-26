
#include "libft.h"

int main(void)
{
    char arr[] = "Good morning Vietnam";

    printf("%s\n", ft_memset(arr, '$', 4));
    ft_bzero(arr, 4);
    printf("%c\n", arr[5]);
}

//ft_memchr
int main(void)
{
    char arr[] = "Good morning Vietnam";

    printf("%p\n", memchr(arr, '$', 20));
    printf("%p\n", ft_memchr(arr, '$', 20));
    printf("%p\n", memchr(arr, 'V', 20));
    printf("%p\n", ft_memchr(arr, 'V', 20));
}
