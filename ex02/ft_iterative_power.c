# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_iterative_power.                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/15 14:01:29 by bezikhal          #+#    #+#              #
#    Updated: 2020/07/15 14:05:00 by bezikhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

int				ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return(0);
	while (power--)
		result *= nb;
	return (result);
}
