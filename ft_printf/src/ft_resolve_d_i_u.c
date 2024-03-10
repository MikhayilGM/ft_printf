#include "ft_printf.h"

int		resolve_d(int var)
{
	int	i;

	ft_putnbr(var);
	i = 0;
	while(var)
	{
		var /= 10;
		++i;
	}
	return (i);
}

int		resolve_i(int var)
{
	int	i;

	ft_putnbr(var);
	i = 0;
	while+(var)
	{
		var /= 10;
		++i;
	}
	return (i);
}

int		resolve_u(unsigned int var)
{
	(void)var;
	return (0);
}