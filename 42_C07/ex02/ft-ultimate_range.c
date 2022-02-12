/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:25:49 by ckala             #+#    #+#             */
/*   Updated: 2021/12/19 14:16:07 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	j;
	int	i;
	int	size;

	size = max - min;
	j = min;
	i = 1;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (size));
	if (!(range))
		return (-1);
	(*range)[0] = j;
	j++;
	while (i < size)
	{
		(*range)[i] = j;
		j++;
		i++;
	}
	return (i);
}


#include <stdio.h>

 int     ft_ultimate_range(int **range, int min, int max);

 int     main(void)
 {
     int i;
     int *tab;
     int min;
     int max;
     int size;

     min = 0;
     max = 5;
     size = ft_ultimate_range(&tab, min, max);
     if (tab != NULL)
     {
         i = -1;
		 while (++i < max - min)
         {
              printf("%d\n", tab[i]);
         }
     }
     else
         printf("tozz");
 }
