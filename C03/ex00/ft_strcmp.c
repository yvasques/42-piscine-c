/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:36:58 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/16 12:36:50 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
// #include <stdio.h>

// int	main (void)
// {
// 	char	s1[3] = "abc";
// 	char	s2[3] = "abD";
// 	int	res;

// 	res = ft_strcmp(s1, s2);
// 	printf("%d", res);
// 	return(0);
// }