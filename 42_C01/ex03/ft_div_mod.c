/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:09:40 by ckala             #+#    #+#             */
/*   Updated: 2021/12/06 09:41:15 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*
#include <stdio.h>
int	main (void){
	int a;
	int b;
	int div;
	int mod;

	a = 20;
	b = 5;
	div = 4;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d\n", div, mod);
}*/
