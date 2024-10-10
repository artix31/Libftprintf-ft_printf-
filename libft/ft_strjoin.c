/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amashhad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 07:18:58 by amashhad          #+#    #+#             */
/*   Updated: 2024/09/09 07:22:22 by amashhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*stringconcate(const char *s1, const char *s2, char *string)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = 0;
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[size])
	{
		string[i] = s2[size];
		i++;
		size++;
	}
	string[i] = '\0';
	return (string);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		size1;
	size_t		size2;
	char		*string;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	string = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (!string)
		return (NULL);
	return (stringconcate(s1, s2, string));
}
