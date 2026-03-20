/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:27:48 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/16 13:37:33 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
// #include <stdio.h>
//
// int	main (void){
//	
// 	char	src[20] = "World!4645646";
// 	char	dest[20] = "Hello ";
// 	ft_strncat(dest, src, 6);
// 	printf("%s", dest);
// 	return(0);
// }
