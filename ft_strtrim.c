/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmagalha <lmagalha@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:28:53 by lmagalha          #+#    #+#             */
/*   Updated: 2022/06/01 14:46:45 by lmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	if (!s1)
		return (0);
	while (s1[i] == *set)
		i++;
	while (s1[j] == *set)
		j--;
	str = malloc(sizeof(char) * (j - i) + 1);
	if (!str)
		return (0);
	str = ft_substr(s1, i, j - i);
	str[ft_strlen(str) + 1] = '\0';
	return (str);
}
