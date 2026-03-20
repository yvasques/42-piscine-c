/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 15:12:10 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/12 15:23:33 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}
void	ft_putnbr (int nbr)
{
	if (nbr < 0)
	{
		putchar('-');
		nbr = -nbr;
	}
	if (nbr < 10)
		putchar(nbr + '0');
	else
	{
		ft_putnbr (nbr / 10);
		putchar (nbr % 10 + '0');		
	}
}

int	ft_strcmp (char *s1, char *s2)
{
	int	i;
	
	i = 0;
	
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		i++;
		}
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
    ft_putnbr(ft_strcmp("abc", "abc"));
    ft_putnbr(ft_strcmp("abc", "abd"));
    ft_putnbr(ft_strcmp("abd", "abc"));
    return (0);
}