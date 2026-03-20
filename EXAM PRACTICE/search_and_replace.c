/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 09:25:53 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/19 09:47:21 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main	(int argc, char *argv[])
{
	int	i;
	
	if (argc == 4)
	{
		i = 0;
		while (argv[1][i])
		{		
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			i++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
	printf("%s", argv[1]);
	return (0);
}