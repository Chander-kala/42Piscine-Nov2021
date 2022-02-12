/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:13:05 by ckala             #+#    #+#             */
/*   Updated: 2021/12/12 16:29:05 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while ((src[j] != 0) && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int	main()
{
	char	dest[] = "hello";
	char	src[] = "beautiful";
	char	*t;
	t = ft_strncat(dest, src, 3);
	printf("%s\n", t);
	return (0);
}*/
