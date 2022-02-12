/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:30:19 by ckala             #+#    #+#             */
/*   Updated: 2021/12/09 09:53:22 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
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

/*int	main()
{
	char string[] = "ASDFGHJKL";
	printf("%s,%d\n",string,ft_str_is_uppercase(string));
}*/		
