/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 22:22:17 by shimon       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:52:26 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	iter;

	iter = 0;
	while (s[iter] != '\0')
		iter++;
	if (c == '\0')
		return ((char*)&s[iter]);
	while (iter >= 0)
		if (s[iter--] == c)
			return ((char*)&s[iter + 1]);
	return (NULL);
}