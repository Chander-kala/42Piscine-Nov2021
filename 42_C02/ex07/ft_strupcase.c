/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:54:51 by ckala             #+#    #+#             */
/*   Updated: 2021/12/08 13:53:34 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
char a[] = "asdfghjklcvbnm";

	printf("%s\n", ft_strupcase(a));
	return (0);
}*/
