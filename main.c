#include<stdio.h>
#include<limits.h>
#include"printf.h"

int main()
{
	int len;
	char *str = "Hello";

	len = ft_printf("%c\n", '0');
	printf("%d\n", len);
	len = printf("%c\n", '0');
	printf("%d\n", len);
	printf("----------------------------------------------------\n");
	len = ft_printf("%d\n", INT_MIN);
	printf("%d\n", len);
	len = printf("%d\n", INT_MIN);
	printf("%d\n", len);
	printf("----------------------------------------------------\n");
	len = ft_printf("%x\n", INT_MAX);
	printf("%d\n", len);
	len = printf("%x\n", INT_MAX);
	printf("%d\n", len);
	printf("----------------------------------------------------\n");
	len = ft_printf("%X\n", INT_MIN);
	printf("%d\n", len);
	len = printf("%X\n", INT_MIN);
	printf("%d\n", len);
	printf("----------------------------------------------------\n");
	len = ft_printf("%s\n", str);
	printf("%d\n", len);
	len = printf("%s\n", str);
	printf("%d\n", len);
	printf("----------------------------------------------------\n");
	len = ft_printf("%c\n", '0');
	printf("%d\n", len);
	len = printf("%c\n", '0');
	printf("%d\n", len);
	printf("----------------------------------------------------\n");
	len = ft_printf("%%\n", '0');
	printf("%d\n", len);
	printf("----------------------------------------------------\n");
	len = ft_printf("%m\n");
	printf("%d\n", len);
	len = printf("%m\n");
	printf("%d\n", len);
	//len = printf("%c\n", '0');
	//printf("%d\n");
}
