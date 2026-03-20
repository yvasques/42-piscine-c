/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 12:08:45 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/09 10:02:20 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	backup;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		backup = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = backup;
		i++;
	}
}

// #include <unistd.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	tab[] = {1, 2, 3, 4, 5};
//     int	size;
// 	int	i;
// 
// 	size = sizeof(tab) / sizeof(int);
// 	ft_rev_int_tab(tab, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		if (i < size - 1)
// 			printf(",");
// 		i++;
// 	}
// 	return (0);
// }
