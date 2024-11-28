#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(int ac, char **av){
	if(ac >= 3){
	printf("OR: %zu\n", strlcat(av[1], av[2], ac -1));
	printf("OR: %s\n", av[4]);
	printf("MY: %zu\n", ft_strlcat(av[1], av[2], ac -1));
	printf("MY: %s\n", av[4]);
	return 0;
}}
