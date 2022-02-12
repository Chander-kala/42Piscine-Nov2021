/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:39:25 by ckala             #+#    #+#             */
/*   Updated: 2021/12/08 18:15:12 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	return (dest);
}
/*int	main(void)
{
	char	src[]="helloworld";
	char	dest[]="1234";

	printf("%s\n", ft_strcpy(dest, src));
}*/
