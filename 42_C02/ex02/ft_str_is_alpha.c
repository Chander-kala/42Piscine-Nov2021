/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:45:34 by ckala             #+#    #+#             */
/*   Updated: 2021/12/08 09:37:59 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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
	char string[] = "abdcdefGHJ@#$";
	printf("%s,%d\n",string,ft_str_is_alpha(string));
	char string1[] ="asdcghj";
	printf("%s,%d\n",string1,ft_str_is_alpha(string1));
}*/
