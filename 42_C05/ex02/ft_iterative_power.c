/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 11:56:14 by ckala             #+#    #+#             */
/*   Updated: 2021/12/14 11:48:55 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	product;

	product = 1;
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
		while (power > 0)
		{
			product = product * nb;
				power--;
		}
	}
	return (product);
}
/*
#include <stdio.h>
int main(){
    int n;
    n = 3;
    int power;
    power = 2;

    printf("%d^%d = %d\n",n,power,ft_iterative_power(n,power));

    return 0;
}*/
