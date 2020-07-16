/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:59:50 by bezikhal          #+#    #+#             */
/*   Updated: 2020/07/13 13:18:56 by bezikhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     ft_iterative_factorial(int nb)
{
    int     factorial;
    int     i;
    
    if (nb == 0)
        return(1);
    else if (nb <0)
        return (0);
    factorial = 1;
    i = 0;
    while (i++)
        factorial *= i;
    return (factorial);
}
