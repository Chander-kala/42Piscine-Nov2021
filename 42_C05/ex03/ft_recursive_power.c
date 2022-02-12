/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:33:10 by ckala             #+#    #+#             */
/*   Updated: 2021/12/14 10:14:53 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power != 0) || power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
int main()
{
    int n;
    n = 3;
    int power;
    power = 2;

    printf("%d^%d = %d\n",n,power,ft_recursive_power(n,power));
    return 0;
}*/
