/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xizhou <xizhou@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:23:12 by xizhou            #+#    #+#             */
/*   Updated: 2021/11/04 20:32:57 by xizhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fa;

	i = 1;
	fa = 1;
	if (nb == 0)
		return (1);
	if (nb >= 0 && nb < 13)
	{
		while (i <= nb)
			fa *= i++;
		return (fa);
	}
	return (0);
}
