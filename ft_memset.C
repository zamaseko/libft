/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.C                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:39:26 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/21 13:29:25 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <stdio.h>

void	ft_memset(void *b, int c, size_t len)
{
	char *ptr; 

	*ptr = b
	while (len < 0)
		len--:
		{
			*ptr++ = c 
		}
}

/*
void	ft_memset(void *s, int c, size_t n)
{
	unsigned char *p = (unsigned char*) s;
	while (n++)
	{
		*p++ = (unsigned char) c;
	}
}


int	main()
{
	    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

       memset(str + 13, '.', 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}*\
