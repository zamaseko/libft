/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:56:29 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/31 12:34:00 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
		count = count + 1;
	return (count);
}

#include <stdio.h>
int main(void)
{
	size_t n;
	const char *l;

	l = "zandile maseko";
	n = ft_strlen(l);
	printf("mine: %zu\n", n);
	n = strlen(l);
	printf("pc: %zu\n", n);
	return (0);
}

