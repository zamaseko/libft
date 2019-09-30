/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 15:12:47 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/26 15:30:04 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_wc(const char *s, char c)
{
	int w;
	int i;
	int j;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			w++;
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			i += j;
		}
		if (s[i] != '\0')
			i++;
	}
	return (w);
}