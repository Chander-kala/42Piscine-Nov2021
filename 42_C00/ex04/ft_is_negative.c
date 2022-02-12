/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:46:35 by ckala             #+#    #+#             */
/*   Updated: 2021/11/30 17:02:57 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	val;

	if (n < 0)
	{
		val = 'N';
	}
	else
	{
		val = 'P';
	}
	write (1, &val, 1);
}
/*
int main(){
	ft_is_negative(0);
	ft_is_negative(-10);
	ft_is_negative(200);
	return(0);
}*/
