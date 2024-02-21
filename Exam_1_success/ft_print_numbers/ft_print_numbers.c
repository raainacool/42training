/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahrakot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:22:12 by mahrakot          #+#    #+#             */
/*   Updated: 2024/02/17 16:24:18 by mahrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_numbers(void)
{
    int nbr;
    nbr = '0';
    while (nbr <= '9')
    {
        write(1, &nbr, 1);
        nbr++;
    }
}
/*
int main(void)
{
    ft_print_numbers();
    return (0);
}
*/
