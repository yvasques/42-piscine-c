/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:53:33 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/07 11:16:29 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{	
	char	num;

	num = '0';
	while (num <= '9')
	{
		write (1, &num, 1);
		num = num + 1;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
