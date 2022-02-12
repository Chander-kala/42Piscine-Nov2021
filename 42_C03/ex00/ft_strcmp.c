/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:51:55 by ckala             #+#    #+#             */
/*   Updated: 2021/12/09 13:10:32 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] == s2[index] && s1[index] != 0 && s2[index] != 0)
	{
		index++;
	}
	return (s1[index] - s2[index]);
}	

/*#include<stdio.h>
#include<string.h>

int main(void)

{
	char	array1[] = "chander";
	char	array2[] = "Chander";

	printf("using the string function the input:%d\n",strcmp(array1,array2));
	printf("using our function the input:%d\n",ft_strcmp(array1,array2));
}*/
