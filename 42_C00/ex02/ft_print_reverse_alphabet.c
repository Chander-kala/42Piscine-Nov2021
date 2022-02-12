/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:56:40 by ckala             #+#    #+#             */
/*   Updated: 2021/11/30 16:58:01 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	val;

	val = 'z';
	while (val >= 'a')
	{
		write (1, &val, 1);
		val--;
	}
}

/*
int main(){
	ft_print_reverse_alphabet();
	return(0);
}*/