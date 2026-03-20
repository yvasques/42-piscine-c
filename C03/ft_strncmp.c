/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 15:49:51 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/16 12:41:08 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* #include <stdio.h>
int	main (void)
{
	unsigned	int	n;
	n = 5;
	
	char	s1[10] = "Teste";
	char	s2 [10] = "Teste123";
	printf ("Valor de s1: %s\n", s1);
	printf ("Valor de s2: %s\n", s2);
	int 	res;
	res = ft_strncmp(s1, s2, n);
	printf("Valor da diferença: %d", res);
}*/
