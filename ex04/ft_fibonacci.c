/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:13:25 by bezikhal          #+#    #+#             */
/*   Updated: 2020/07/15 14:17:41 by bezikhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int				ft_fibonacci(int index)
{
	if (index < 0)
			return(-1);
	if (index == 0)
		return(0);
	if (index == 1)
		return(1);
	return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
