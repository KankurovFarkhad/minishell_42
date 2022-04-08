/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llabs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:58:54 by hwatercr          #+#    #+#             */
/*   Updated: 2022/03/21 18:21:12 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

long long	ft_llabs(long long num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}
