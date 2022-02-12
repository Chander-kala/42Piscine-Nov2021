/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 16:14:08 by ckala             #+#    #+#             */
/*   Updated: 2021/12/18 16:42:25 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}
/*
#include<stdio.h>
char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *text[10];

	text[0] = "test";
	text[1] = "a";
	text[2] = "great";
	text[3] = "ftstrjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "seperator";
	text[7] = "/--/";
	text[8] = "42";
	text[9] = "adelaide";

	printf("%s\n", ft_strjoin(10, text, "_"));
}*/
