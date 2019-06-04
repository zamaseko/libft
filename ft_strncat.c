/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:06:59 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/04 13:17:37 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t a;
	size_t b;

	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (b < n && s2[b] != '\0')
	{
		s1[a] = s2[b];
		a++;
		b++;
	}
	s1[a] = '\0';
	return (s1);
}


/*int main(void)
{
	char *k;
	char l[90] = "Zandile";
	char x[90] = "Zandile";
	const char m[50] = "Maseko";
	size_t n;

	n = 6;
	k = ft_strncat(l, m, n);
	ft_putstr("mine: ");
	ft_putstr(k);
	ft_putchar('\n');
	k = strncat(x, m, n);
	ft_putstr("pc: ");
	ft_putstr(k);
	return (0);
}*/
