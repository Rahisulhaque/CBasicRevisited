/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 17:43:23 by rhaque            #+#    #+#             */
/*   Updated: 2017/08/02 18:18:39 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
		ft_putchar(str[i++]);
	}
}


int		main(void)
{
	ft_putchar('z');
	ft_putchar('\n');
	ft_putstr("Hello World\n");
	return (0);
}
