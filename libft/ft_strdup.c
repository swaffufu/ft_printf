/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afitri <afitri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:19:07 by afitri            #+#    #+#             */
/*   Updated: 2025/04/24 12:46:55 by afitri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		size++;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <unistd.h>
int		main(void)
{
	char	*original = "Hello, world!";
	char	*copy;

	copy = ft_strdup(original);
	if (copy)
	{
		write(1, "Original: ", 10);
		write(1, original, ft_strlen(original));
		write(1, "\nCopy: ", 7);
		write(1, copy, ft_strlen(copy));
		write(1, "\n", 1);
		free(copy);
	}
	return (0);
}*/
