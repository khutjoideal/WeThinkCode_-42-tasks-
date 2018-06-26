/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmotlaf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 01:02:23 by kmotlaf           #+#    #+#             */
/*   Updated: 2018/06/08 20:33:05 by kmotlaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	ns1;
	int		a;

	ns1 = 0;
	a = 0;
	while (s1[a])
		a++;
	while (s2[ns1] && (n > ns1))
	{
		s1[a + ns1] = s2[ns1];
		ns1++;
	}
	s1[a + ns1] = 0;
	return (s1);
}