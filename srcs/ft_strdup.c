/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:57:02 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/29 12:38:20 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char *a;
	int i;

	i = 0;
	a = (char *)malloc(sizeof(char) * (strlen(s1) + 1));
	if (!(a = (char *)malloc(sizeof(char) * (strlen(s1) + 1))))
		return (0);
	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}
	return (a);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
		{
			ft_putstr(&s[i]);
			i++;
		}
}
int main()
{
	char *m;
	m = ft_strdup("Zandi");
	ft_putstr(m);
	return (0);
}
