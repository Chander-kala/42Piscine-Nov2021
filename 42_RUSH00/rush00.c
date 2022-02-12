/*																			  */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimcuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:09:24 by jlimcuan          #+#    #+#             */
/*   Updated: 2021/11/28 12:26:06 by jlimcuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void ft_putchar(char a);

void rush(int x, int y){
	int a ;
	int b;
	b=1;
	while (x > 0 && b <=y ){
		a=1;
		while (a <= x){
				if ((a != 1 && a != x) && (b==1 || b==y))
					ft_putchar('-');
				else if ((b != 1 && b != y) && (a == 1 || a == x))
					ft_putchar('|');
				else if ((a == 1) || (a == x) || (b == 1) || (b == y))
					ft_putchar('o');
				else
					ft_putchar(' ');
				a++;
			}
		ft_putchar('\n');
		b++;
	}
}
