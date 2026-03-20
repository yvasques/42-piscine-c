/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:03:37 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/09 14:38:52 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	backup;

	backup = *a;
	*a = *b;
	*b = backup;
}

// #include <stdio.h>
// int main (void)
// {   int a;
//     int b;
//     a = 2;
//     b = 4;
//     printf("Antes: a = %d, b = %d\n", a, b);
//     ft_swap(&a, &b);
//     printf("Depois: a = %d, b = %d\n", a, b);
// }
