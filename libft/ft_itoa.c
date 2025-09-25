/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afitri <afitri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 08:05:05 by afitri            #+#    #+#             */
/*   Updated: 2025/06/08 08:05:18 by afitri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			buf[12];
	int				i;
	int				neg;
	unsigned int	num;

	i = 11;
	neg = n < 0;
	buf[i--] = '\0';
	if (n == 0)
		buf[i--] = '0';
	num = 0;
	if (n < 0)
		num = -n;
	else
		num = n;
	while (num > 0)
	{
		buf[i--] = (num % 10) + '0';
		num /= 10;
	}
	if (neg)
		buf[i--] = '-';
	return (ft_strdup(&buf[i + 1]));
}
