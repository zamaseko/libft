/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:43:58 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/23 12:57:43 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putstr(char const *s)
{
	int z;

	z = 0;
	while (s[z] != '\0')
	{
		write(1, &s[z], 1);
		z++;
	}
}

void	ft_putstr(char const *s)
{
	int i;

	i = 0;

	while(s[i] != '\0')
		ft_putstr(s[i]);
		i++;
}

