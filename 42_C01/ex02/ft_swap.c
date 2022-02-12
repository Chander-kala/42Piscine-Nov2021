/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:11:36 by ckala             #+#    #+#             */
/*   Updated: 2021/12/06 14:56:55 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)

{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main(void){
	int num1 = 1;
	int	*a = &num1;
	int	num2 = 8;
	int *b = &num2;
	ft_swap (&num1, &num2);
	printf("a = %d\n",*a);
	printf("b = %d\n",*b);
	return (0);
}*/
