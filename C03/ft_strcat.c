/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 11:42:49 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/16 13:31:26 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
// #include <stdio.h>
//
// int	main (void)
// {
//	
// 	char	src[20] = "1 2 3.";
// 	char	dest[20] = "Teste: ";
// 	printf("%s", (ft_strcat(dest, src)));
// 	return(0);
// }
