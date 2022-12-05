/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibenoit <nibenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:11:30 by nibenoit          #+#    #+#             */
/*   Updated: 2022/12/01 20:01:09 by nibenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"
#include "printers.h"

int	print_char(unsigned char c)
{
	return (write_buf((const char *)&c, 1));
}
