/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:54:37 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/18 10:25:02 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	char	*str = "Testando funcao 42 Sao Paulo";
	char	*to_find = "funcao";
	char	*res;
	
	res = ft_strstr(str, to_find);
	if (res)
		printf("Encontrado: %s\n", res);
	else
		printf("Nada encontrado.\n");
}
