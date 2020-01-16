/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codecham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:36:13 by codecham          #+#    #+#             */
/*   Updated: 2020/01/16 12:51:34 by codecham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void src, int c, size_t n)
{
	unsigned char *src

	while(n > 0)
	{
		if(src == c)
		{
			dst = (void *)src;
			(dst*)++;
			return(dst);
		}
		dst = (void *)src;
		dst++;
		src++;
		n--;
	}
	return (0);
}
