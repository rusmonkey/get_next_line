/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhetting <qhetting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:54:27 by qhetting          #+#    #+#             */
/*   Updated: 2019/01/15 20:29:50 by qhetting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t i;

	i = 0;
	while (*(s + i) && i < maxlen)
		i++;
	return (i);
}
