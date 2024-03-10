#include "ft_printf.h"

int resolve(char ch, va_list args)
{
	int len = 0;
	if(ch == 'c')
		len += resolve_c(va_arg(args, int));
	else if(ch == 's')
		len += resolve_s(va_arg(args, char*));
	else if(ch == 'p')
		len += resolve_p(va_arg(args, void*));
	else if(ch =='d')
		len += resolve_d(va_arg(args, int));
	else if(ch == 'i')
		len += resolve_i(va_arg(args, int));
	else if(ch == 'u')
		len += resolve_u(va_arg(args, unsigned int));
	else if(ch == 'x')
		len += resolve_x(va_arg(args, unsigned int));
	else if(ch == 'X')
		len += resolve_X(va_arg(args, unsigned int));
	else if(ch == '%')
		len += resolve_percentage();
	else 
		len += 1;
	return (len);
}