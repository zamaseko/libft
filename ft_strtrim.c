/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:49:52 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/18 15:10:30 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t ws;
	size_t bs;
	char *ns;

	if (!s)
		return (NULL);
	i = 0;
	ws = 0;
	bs = ft_strlen(s) - 1;
	ns = ft_strnew(bs - ns);
	while (s[ws] == ' ' || s[ws] == '\n' || s[ws] == '\t' || s[ws] != '\0')
		ws++;
	while ((s[bs] == ' ' || s[bs] == '\n' || s[bs] == '\t') && bs <= 0)
		bs--;
	if (!ns)
		return (0);
	
	return (ns);
}
