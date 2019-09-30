/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 08:38:32 by zamaseko          #+#    #+#             */
/*   Updated: 2019/09/30 14:27:19 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	upper(char c)
{
	return (ft_toupper(c));
}

void	ft_printer(char **w)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (w[i])
		ft_putendl(ft_strmap(w[i++], &upper));
}

int		main(void)
{
	char *a;
	char **w;

	a = "   hello what is you name    ";
	//whitespaces function
	a = (ft_strtrim(a));
	//split function using a
	w = ft_strsplit(a, ' ');
	//print w array using printer
	ft_printer(w);
	return (0);
}
