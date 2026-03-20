/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:08:37 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/12 10:13:29 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen (char *str)
{
	int	index;
	
	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

int	main (void)
{
	char	*str;

	write(1, "tamanho ok\n", 11);
	
	return(0);
}