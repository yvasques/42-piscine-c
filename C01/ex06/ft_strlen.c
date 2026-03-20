/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 11:59:08 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/09 14:15:57 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
// 	int i;
//  	char	*str;

// 	str = "Oi tudo bem.";
// 	i = ft_strlen(str);
// 	printf("%d\n", i);
//     return (0);
// }
