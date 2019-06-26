/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:58:22 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/26 15:08:48 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printer(char **w)
{
	int i;

	i = 0;
	if (i == 0)
		ft_putendl(w[i++]);
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
	ft_printer(&a);
	return (0);
}

//take out whitespaces on the sides of a
//put the words into array w (delimiter -> ' ')
//capitalize, print & \n each word using ft_printer using toupper, putendl
//& strmap

//hello
//tom


//w[1]
