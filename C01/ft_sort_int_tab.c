/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 12:08:45 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/12 13:13:54 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swapped;
	int	i;
	int	temp;

	if (size <= 1)
	{
		return ;
	}	
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	tab[] = {10, 2, 15, 1, 5};
//     int	size;
// 	int	i;

// 	size = sizeof(tab) / sizeof(int);
// 	i = 0;
// 	printf("Antes da função: {");
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		if (i < size - 1)
// 			printf(", ");
// 		i++;
// 	}
// 	printf("}\n");

// 	ft_sort_int_tab(tab, size);
// 	i = 0;
// 	printf("Depois da função: {");
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		if (i < size - 1)
// 			printf(", ");
// 		i++;
// 	}
// 	printf("}");
// 	return (0);
// }
