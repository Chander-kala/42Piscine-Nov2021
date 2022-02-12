/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:14:29 by ckala             #+#    #+#             */
/*   Updated: 2021/12/14 09:54:44 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
/*
#include <stdio.h>

int main()
{
    int n;
    n = 3;
    printf("%d! = %d\n",n,ft_recursive_factorial(n));
    return 0;
}*/
