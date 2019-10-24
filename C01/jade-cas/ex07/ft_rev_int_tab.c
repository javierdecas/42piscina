/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:44:45 by jade-cas          #+#    #+#             */
/*   Updated: 2019/10/13 17:59:33 by jade-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int aux[size];

	i = 0;
	j = size - 1;
	while (j >= 0 && i <= size - 1)
	{
		aux[i] = tab[j];
		i++;
		j--;
	}
	i = 0;
	while (i <= size - 1)
	{
		tab[i] = aux[i];
		i++;
	}
}
