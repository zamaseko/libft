/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:56:29 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/28 15:47:38 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 

size_t	ft_strlen(const char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count = count + 1;
		return (count);
	}
}

int main()
{
	int k;
	char *s;

	s = "Hello";
	k = ft_strlen("s");
	return (0);
}
