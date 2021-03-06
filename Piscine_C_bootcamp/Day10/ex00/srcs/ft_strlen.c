/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:01:00 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/03/27 12:41:03 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_find_len(char *str)
{
	int cntr;

	cntr = 0;
	while (str[cntr] != '\0')
	{
		cntr++;
	}
	return (cntr);
}
