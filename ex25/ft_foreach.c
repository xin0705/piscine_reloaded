/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xizhou <xizhou@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 04:30:05 by xizhou            #+#    #+#             */
/*   Updated: 2021/11/06 04:51:44 by xizhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
