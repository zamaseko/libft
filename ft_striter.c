/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:38:08 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/24 16:00:29 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int i;
	char *str;

	i = 0;
	str = (char *)s;
	if (!s)
		return ;
	while (str[i] != '\0')
	{
		f(&str[i]);
		i++;
	}
}
