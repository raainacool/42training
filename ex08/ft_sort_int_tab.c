/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahrakot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:38:48 by mahrakot          #+#    #+#             */
/*   Updated: 2024/01/16 11:47:29 by mahrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	swap(int *a, int *b)
{
	int	e;

	e = *a;
	*a = *b;
	*b = e;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	u;
	int	v;

	u = 1;
	while (u < size)
	{
		v = u;
		while (v > 0 && *(tab + v - 1) > *(tab + v))
		{
			swap(tab + v, tab + v - 1);
			v--;
		}
		u++;
	}
}
