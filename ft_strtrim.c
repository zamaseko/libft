/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:49:52 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/19 17:49:35 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_gap(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	size_t ws;
	size_t bs;
	char *ns;

	if (!s)
		return (NULL);
	ws = 0;
	bs = ft_strlen(s) - 1;
	while (ft_gap(s[ws]))
		ws++;
	if (ws == bs + 1)
		return ((char *)s + ws);
	while (ft_gap(s[bs]))
		bs--;
	ns = ft_strsub(s, ws, bs - ws  + 1);
	if (!ns)
		return (0);
	return (ns);
}
