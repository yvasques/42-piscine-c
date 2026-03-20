/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:26:24 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/09 09:43:23 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include <stdio.h>

// int main (void)
// {
//     int a;
//     int b;
//     a = 20;
//     b = 3;
//     ft_ultimate_div_mod (&a, &b);
//     printf("O resultado da divisão é %d.\n", a);
//     printf("O resto da divisão é %d.\n", b);
//     return (0);
// }
