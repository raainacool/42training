/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahrakot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:50:16 by mahrakot          #+#    #+#             */
/*   Updated: 2024/02/17 16:50:52 by mahrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int  main()
{
    write(1, "a", 1);
    return (0);
}
