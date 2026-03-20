/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:40:17 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/19 10:54:20 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	putstr (char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}
int	main	(int argc, char *argv[])
{
	int	i;
	
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{		
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = argv[1][i] - 32;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = argv[1][i] + 32;
			i++;
		}
		putstr(argv[1]);
	}
		write(1, "\n", 1);
	return (0);
}