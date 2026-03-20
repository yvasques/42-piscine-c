/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 10:32:13 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/09 09:41:39 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// #include <stdio.h>

// int main (void)
// {
//     int div;
//     int mod;

//     ft_div_mod(13, 5 , &div, &mod);
//     printf("O resultado da divisão é '%d' \n", div);
//     printf("O resto da divisão é '%d'.", mod);
//     return (0);
// }
