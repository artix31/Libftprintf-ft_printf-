/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amashhad <amashhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:33:02 by amashhad          #+#    #+#             */
/*   Updated: 2024/09/19 04:50:30 by amashhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_putitox(unsigned int nb, char size);
int		ft_putnbr(int nb);
int		ft_putstr(char *s);
int		ft_putuns(unsigned int nb);
int		ft_putvoid(void *v);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		ft_printf(const char *func, ...);

#endif
