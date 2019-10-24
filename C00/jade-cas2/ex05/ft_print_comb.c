/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 12:48:26 by jade-cas          #+#    #+#             */
/*   Updated: 2019/10/14 13:35:41 by jade-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void ft_print_comb(void);
void bucle(char centenas, char decenas, char unidades);
void imprime_digito(char centenas, char decenas, char unidades);

void	ft_print_comb(void)
{
	char	centenas;
	char	decenas;
	char	unidades;

	centenas = '0';
	decenas = '0';
	unidades = '0';
	bucle(centenas, decenas, unidades);
}

void	bucle(char centenas, char decenas, char unidades)
{
	while (centenas <= '9')
	{
		if (centenas < decenas && decenas < unidades)
		{
			imprime_digito(centenas, decenas, unidades);
		}
		if (unidades == '9')
		{
			if (decenas == '9')
			{
				decenas = '0';
				centenas++;
			}
			unidades = '0';
			decenas++;
		}
		else
		{
			unidades++;
		}
	}
}

void	imprime_digito(char centenas, char decenas, char unidades)
{
	write(1, &centenas, 1);
	write(1, &decenas, 1);
	write(1, &unidades, 1);
	if (centenas != '7' || decenas != '8' || unidades != '9')
	{
		write(1, ", ", 2);
	}
}
