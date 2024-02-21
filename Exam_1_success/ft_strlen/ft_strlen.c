/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahrakot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:09:03 by mahrakot          #+#    #+#             */
/*   Updated: 2024/02/19 12:21:48 by mahrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int ft_strlen(char *str)
{
    unsigned int len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}
/*
int main()
{
    char    str[] = "Love her";
    
    printf("%ld\n", strlen(str));
    printf("%d\n", ft_strlen(str));
    return (0);
}
*/
