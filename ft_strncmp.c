/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:18:39 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/25 18:18:15 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && n - 1 > i)
	{
		if (s1[i] < s2[i])
			return (1);
		if (s1[i] > s2[i])
			return (-1);
		i++;
	}
	if ((unsigned char)s1[i] - (unsigned char)s2[i] > 0)
		return (1);
	if ((unsigned char)s1[i] - (unsigned char)s2[i] < 0)
		return (-1);
	else
		return (0);
}
