/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 19:27:30 by mikhmart          #+#    #+#             */
/*   Updated: 2024/03/10 20:09:29 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *src, ...);
void	ft_putchar(char ch);
int		resolve(char ch, va_list args);
int		resolve_c(char var);
int		resolve_s(char* var);
int		resolve_p(void* var);
int		resolve_d(int var);
int		resolve_i(int var);
int		resolve_u(unsigned int var);
int		resolve_x(int var);
int		resolve_X(int var);
int		resolve_percentage();
void	ft_putnbr(int nb);

#endif