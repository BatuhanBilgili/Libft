/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:24:14 by bbilgili          #+#    #+#             */
/*   Updated: 2022/10/08 13:24:14 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*son;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	a = 0;
	while ((a < len) && s[start + a] != '\0')
		a++;
	son = (char *)malloc((sizeof(char) * a) + 1);
	if (son == NULL)
		return (NULL);
	b = 0;
	while (b < a)
	{
		son[b] = s[b + start];
		b++;
	}
	son[b] = '\0';
	return (son);
}
