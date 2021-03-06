/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:06:07 by ckala             #+#    #+#             */
/*   Updated: 2021/12/13 15:20:50 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while ((result == 0) && (s2[i] != 0) || (s1[i] != 0) && (i < n))
	{
		if (s2[i] != s1[i])
		{
			result = s1[i] - s2[i];
		}
		{
			i++;
		}
	}
	return (result);
}
/*
#include<stdio.h>
#include<string.h>

 int main(void)
{
 char    array1[] = "hello";
 char    array2[] = "Hello fellow";

 printf("using the string function the output is:%d\n",strncmp(array1,array2,5));
 printf("using our function the output is:%d\n",ft_strncmp(array1,array2,5));
}*/
