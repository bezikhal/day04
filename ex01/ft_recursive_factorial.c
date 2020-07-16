/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:54:48 by bezikhal          #+#    #+#             */
/*   Updated: 2020/07/15 13:59:24 by bezikhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_recursive_factorial(int nb)
{
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1))
	if (nb == 0)
			return(1);
	return(0);	
}
