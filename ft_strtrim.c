/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:49:52 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/17 16:14:31 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
/*{
	unsigned int i;
//	unsigned int j;
	unsigned int sp;
	char *ns;

	i = 0;
	ns = (char *)s;
	sp = ft_strlen(s - 1);
	if (sp == 0)
		return ((char *)s);
	while (ns[sp] == ' ' || ns[sp] == '\n' || ns[sp] == '\t' || ns[sp] !='\0')
		sp--;
	while (ns[i] == ' ' || ns[i] == '\n' || ns[i] == '\t' || ns[i] != '\0')
		i++; 
	return (0);
}
*/
{  
	unsigned int i;
	unsigned int bs;
	unsigned int fs;
	char *ns;

	i = 0;
	bs = ft_strlen(s) - 1;
	fs = 0;
	if (!s)
		return (0);
	while ((s[bs] == 32 || s[bs] == '\n' || s[bs] == '\t') && bs >= 0)
		bs--;
	while ((s[fs] == 32 || s[fs] == '\n' || s[fs] == '\t') && fs < bs)
		fs++;
	if (!(ns = ft_strnew(ft_strlen(s) - (ft_strlen(s) - bs + fs))))
		return (NULL);
	while (i < (ft_strlen(s) - (ft_strlen(s) - bs + fs)))
		{
			ns[i] = s[fs + i];
			i++;
		}
	return (ns);
}

