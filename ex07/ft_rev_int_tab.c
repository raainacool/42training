/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahrakot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:16:57 by mahrakot          #+#    #+#             */
/*   Updated: 2024/01/16 13:38:35 by mahrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	load;

	i = 0;
	while (i < size / 2)
	{
		load = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = load;
		i++;
	}
}
