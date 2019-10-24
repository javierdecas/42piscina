/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:48:54 by jade-cas          #+#    #+#             */
/*   Updated: 2019/10/14 12:03:08 by jade-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	print(char m, char c, char d, char u);

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;
	char	z;

	n1 = 0;
	n2 = 0;
	z = '0';
	while (n2 <= 99)
	{
		n1 = 0;
		while (n1 <= 99)
		{
			if (n2 < n1)
			{
				print(z + n2 / 10, z + n2 % 10, z + n1 / 10, z + n1 % 10);
				if (n2 != 98)
					write(1, ", ", 2);
			}
			n1++;
		}
		n2++;
	}
}

void	print(char m, char c, char d, char u)
{
	char	espacio;

	espacio = ' ';
	write(1, &m, 1);
	write(1, &c, 1);
	write(1, &espacio, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}
