/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahrakot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:44:41 by mahrakot          #+#    #+#             */
/*   Updated: 2024/02/19 12:52:55 by mahrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
/*
int main()
{
    int x = 5;
    int y = 9;

    printf("Before swap x = %d, and y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("After swap x = %d, and y = %d\n", x, y);
    return (0);
}
*/
