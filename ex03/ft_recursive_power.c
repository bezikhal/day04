/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:06:25 by bezikhal          #+#    #+#             */
/*   Updated: 2020/07/15 14:11:54 by bezikhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_recursive_power(int nb, int power)
{
	if (!nb || power < 0)
			return(0);
	if (!power)
		return(1):
	return (nb * ft_recursive_power(nb, power - 1));	
}
