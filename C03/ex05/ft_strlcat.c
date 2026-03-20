/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 09:24:06 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/16 13:48:59 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i ;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	*src = "World";
// 	char	dest[15] = "Hello";
// 	unsigned int	total_size = 11;
// 	unsigned int	res;
//	
// 	printf("Antes - Dest: '%s'\n", dest);
// 	res = ft_strlcat(dest, src, total_size);
// 	printf("Depois - Dest: '%s'\n", dest);
// 	printf("Valor Retornado: %u\n", res);
// 	printf("Tamanho do buffer: %u\n", total_size);
//	
// 	if (res >= total_size)
// 	{
// 		printf("\nA string foi truncada! \n");
// 		printf("O buffer precisaria ser de %u bytes\n", res + 1);
// 	}
// 	return(0);
// }
