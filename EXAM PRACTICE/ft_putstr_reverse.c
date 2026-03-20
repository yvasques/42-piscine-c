/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:43:54 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/12 14:49:04 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr_reverse (int *str, int size)
{
	int	i;
	int	temp;

	if (size < 1)
		return;
	i = 0;
	while (i < size / 2)
		{
			temp = str[i];
			str[i] = str[size - i -1];
			str[size - i -1 ] = temp;
			i++;
		}
	
}

#include <stdio.h>

int	main(void)
{	
	int	str[5] = {0, 1, 2, 3, 4};
	int	size;
	size = 5;
	int	i;
	i = 0;
	ft_putstr_reverse(str, size);
	while (i < size)
	{
		printf("%d", str[i]);
		i++;
	}
	return(0);	
	
}