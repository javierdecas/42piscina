/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:24:27 by jade-cas          #+#    #+#             */
/*   Updated: 2019/10/18 11:19:55 by jade-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < 'A')
				str[i] = str[i] - 32;
			else if (str[i - 1] > 'Z' && str[i - 1] < 'a')
				str[i] = str[i] - 32;
			else if (str[i - 1] > 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

void	ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}
