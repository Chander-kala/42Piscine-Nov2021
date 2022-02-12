/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:05:20 by ckala             #+#    #+#             */
/*   Updated: 2021/12/14 09:45:57 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	product;

	product = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	while (nb != 0)
	{
		product = product * nb;
		nb--;
	}
	return (product);
}
/*#include <stdio.h>

int main(){
    int n;
    n = 3;
    printf("%d! = %d\n",n,ft_iterative_factorial(n));
    return 0;
}*/
