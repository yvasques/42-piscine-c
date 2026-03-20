/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 10:00:43 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/07 11:16:44 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	divider;
	int	number;

	number = nb;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	divider = 1;
	while (number / divider >= 10)
		divider = divider * 10;
	while (divider > 0)
	{
		ft_putchar((number / divider) + '0');
		number = number % divider;
		divider = divider / 10;
	}
}
// int	main (void)
// {
// 	ft_putnbr(125);
// 	return (0);
// }
