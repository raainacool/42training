/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahrakot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:59:37 by mahrakot          #+#    #+#             */
/*   Updated: 2024/02/19 12:00:25 by mahrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main()
{
    write(1, "z", 1);
    write(1, "\n", 1);
    return (0);
}
