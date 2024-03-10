#include "ft_printf.h"

int		resolve_c(char var)
{
	ft_putchar(var);
	return (2);
}

int		resolve_s(char* var)
{
	int	i;

	i = 0;
	while(var[i])
	{
		ft_putchar(var[i]);
		++i;
	}
	return (i);
}

int		resolve_percentage()
{
	ft_putchar('%');
	return (2);
}