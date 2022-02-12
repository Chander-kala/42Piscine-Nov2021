/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:55:07 by ckala             #+#    #+#             */
/*   Updated: 2021/12/06 09:14:46 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = (*a / *b);
	tempb = (*a % *b);
	*a = tempa;
	*b = tempb;
}

/*
#include <stdio.h>
int	main (void){	
	int a;
	int b;
	a = 20;
	b = 4;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d\n", a ,b);
}*/
