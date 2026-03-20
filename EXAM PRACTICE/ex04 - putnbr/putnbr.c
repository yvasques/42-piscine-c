/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:30:25 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/19 09:51:49 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}
void	putnbr (int nbr)
{
	long	num;
	num = nbr;
	
	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num < 10)
		putchar(num + '0');
	else
	{
		putnbr (num / 10);
		putchar (num % 10 + '0');		
	}
}

int	main(void)
{
	putnbr(-1653);

	return (0);
}