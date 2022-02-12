/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:54:25 by ckala             #+#    #+#             */
/*   Updated: 2021/12/08 14:20:23 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
				i++;
	}
	return (str);
}

/*int main(void)
{
char a[] = "GOOD DAY";
    printf("%s\n", ft_strlowcase(a));
    return (0);
}*/
