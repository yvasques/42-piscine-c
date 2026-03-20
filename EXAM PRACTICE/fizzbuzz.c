/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:43:15 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/11 10:15:48 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//USANDO RECURSIVIDADE:

// void	ft_putnbr(int nb)
// {
// 	char 	c;
// 	if (nb > 9)
// 		ft_putnbr(nb / 10);
// 	c = (nb % 10) + '0';
// 	write (1, &c, 1);
	
// }

void	ft_putnbr2(int	nb)
{
	char	c;
	if (nb == 100)
		write (1, "100", 3);
	else if (nb > 9)
	{
		c = (nb / 10) + '0';
		write (1, &c, 1);
		c = (nb % 10) + '0';
		write (1, &c, 1);
	}
	else
	{	c = nb + '0';
		write (1, &c, 1);
		
	}
}

void	fizzbuzz(void)
{
	int	num;
	
	num = 1;
	while (num <= 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			write (1, "fizzbuzz", 8);
		else if (num % 3 == 0)
			write (1, "fizz", 4);
		else if (num % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnbr2(num);
		write (1, "\n", 1);
		num++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}