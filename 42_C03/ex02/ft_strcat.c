/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:06:18 by ckala             #+#    #+#             */
/*   Updated: 2021/12/12 16:26:37 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include<stdio.h>
int	main()
{
	char	dest[] = "Hello";
	char	src[] = "beautiful";
	char	*t;

	t = ft_strcat(dest, src);
	printf("%s\n", t);
	return(0);
}*/
