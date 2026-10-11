#include "my_libf.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

void	del(void *content)
{
	free(content);
}

void	print_content(void *content)
{
	printf("%s ", (char *)content);
}

void	*to_lower(void *content)
{
	char	*str;
	char	*new_str;
	int		i;

	str = (char *)content;
	new_str = malloc(strlen(str) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = ft_tolower(str[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

void	test_char(void)
{
	printf("\n=== CHARACTER FUNCTIONS ===\n");

	printf("isalpha A: %d\n", ft_isalpha('A'));
	printf("isdigit 5: %d\n", ft_isdigit('5'));
	printf("isalnum A: %d\n", ft_isalnum('A'));
	printf("isascii 127: %d\n", ft_isascii(127));
	printf("isprint A: %d\n", ft_isprint('A'));
	printf("toupper a: %c\n", ft_toupper('a'));
	printf("tolower A: %c\n", ft_tolower('A'));
}

void	test_string(void)
{
	char	*str;
	char	**split;
	int		i;

	printf("\n=== STRING FUNCTIONS ===\n");

	printf("strlen: %zu\n", ft_strlen("Hello"));

	printf("strchr: %s\n", ft_strchr("Hello", 'l'));
	printf("strrchr: %s\n", ft_strrchr("Hello", 'l'));

	printf("strncmp: %d\n", ft_strncmp("abc", "abd", 3));
	printf("strnstr: %s\n", ft_strnstr("Hello World", "World", 11));

	str = ft_strdup("Hello");
	printf("strdup: %s\n", str);
	free(str);

	str = ft_substr("Hello World", 6, 5);
	printf("substr: %s\n", str);
	free(str);

	str = ft_strjoin("Hello ", "World");
	printf("strjoin: %s\n", str);
	free(str);

	str = ft_strtrim("   Hello   ", " ");
	printf("strtrim: '%s'\n", str);
	free(str);

	split = ft_split("Hello World 42", ' ');
	i = 0;
	printf("split:\n");
	while (split[i])
	{
		printf("  [%s]\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);

	str = ft_itoa(-12345);
	printf("itoa: %s\n", str);
	free(str);
}

void	test_memory(void)
{
	char	a[20];
	char	b[20];

	printf("\n=== MEMORY FUNCTIONS ===\n");

	ft_memset(a, 'A', 5);
	a[5] = '\0';
	printf("memset: %s\n", a);

	ft_bzero(a, 5);
	printf("bzero: done\n");

	ft_memcpy(a, "Hello", 6);
	printf("memcpy: %s\n", a);

	ft_memmove(a + 2, a, 5);
	printf("memmove: %s\n", a);

	memcpy(b, "Hello", 6);
	printf("memcmp: %d\n", ft_memcmp(a, b, 5));

	printf("memchr: %s\n", (char *)ft_memchr(a, 'l', 10));

	printf("atoi: %d\n", ft_atoi("-12345"));

	printf("calloc: ");
	{
		int *p = ft_calloc(5, sizeof(int));
		printf("%d %d %d\n", p[0], p[1], p[2]);
		free(p);
	}
}

void	test_fd(void)
{
	printf("\n=== FD FUNCTIONS ===\n");

	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("Hello from fd\n", 1);
	ft_putendl_fd("Hello with newline", 1);
	ft_putnbr_fd(12345, 1);
	ft_putchar_fd('\n', 1);
}

void	test_list(void)
{
	t_list	*lst;
	t_list	*mapped;
	t_list	*last;

	printf("\n=== LINKED LIST FUNCTIONS ===\n");

	lst = NULL;

	ft_lstadd_back(&lst, ft_lstnew("Hello"));
	ft_lstadd_back(&lst, ft_lstnew("WORLD"));
	ft_lstadd_front(&lst, ft_lstnew("FIRST"));

	printf("size: %u\n", ft_lstsize(lst));

	last = ft_lstlast(lst);
	printf("last: %s\n", (char *)last->content);

	printf("list: ");
	ft_lstiter(lst, print_content);
	printf("\n");

	mapped = ft_lstmap(lst, to_lower, del);

	printf("mapped: ");
	ft_lstiter(mapped, print_content);
	printf("\n");

	ft_lstclear(&lst, del);
	ft_lstclear(&mapped, del);

	printf("lists cleared\n");
}

