/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:44:21 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/16 14:50:03 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str = "Teste";
// 	int	res;
//
// 	res = ft_strlen(str);
// 	printf("%d/n", res);
// 	return(0);
// }