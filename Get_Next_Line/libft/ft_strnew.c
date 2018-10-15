/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 04:27:47 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/07 07:42:33 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	if (!(s = (char *)malloc(sizeof(*s) * (size + 1))))
		return (0);
	ft_memset(s, '\0', size + 1);
	return (s);
}