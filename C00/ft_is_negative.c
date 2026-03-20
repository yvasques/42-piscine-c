/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:54:03 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/05 16:59:03 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n >= 0)
		write (1, &positive, 1);
	else
		write (1, &negative, 1);
}
// int	main(void)
// {
// 	ft_is_negative(5);
// 	ft_is_negative(-1);
// 	ft_is_negative(0);
// 	return (0);
// }