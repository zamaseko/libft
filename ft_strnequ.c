/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:44:05 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/11 17:15:40 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	
	i = 0;
	if (!s1 || !s2)
		return (0);
	if (ft_strcmp(s1, s2) != 0 && i < n)
		return (0);
	else
		return (1);
}
