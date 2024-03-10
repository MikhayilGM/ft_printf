/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 19:20:21 by mikhmart          #+#    #+#             */
/*   Updated: 2024/03/10 20:51:22 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *src, ...)
{
	int		len;
	int		i;
	va_list args;

	len = 0;
	va_start(args, src);
	i = 0;
	while(src[i] != '\0')
	{
		if(src[i] == '%')
		{
			len += resolve(src[++i], args);
			++i;
		}
		else 
		{
			ft_putchar(src[i]);
			++i;
			++len;
		}
	}
	return (len);
}

int main()
{
	int i = 10;
	
	(void)(i);
	// ft_putnbr(1000);
	printf("printf - %d\n", printf("asdc084848"));
	printf("ft_printf - %d\n", ft_printf("asdc084848"));
}