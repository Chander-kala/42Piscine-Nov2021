 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:22:32 by ckala             #+#    #+#             */
/*   Updated: 2021/12/08 09:39:14 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int main()
{
	char string[] = "asdfghjkl";
	printf("%s,%d\n",string,ft_str_is_lowercase(string));
}*/
