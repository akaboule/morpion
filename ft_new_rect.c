/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_rect.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 15:24:32 by jleu              #+#    #+#             */
/*   Updated: 2016/03/10 20:07:18 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "morpion.h"

t_rect	ft_new_rect(int x, int y, int l, int h)
{
	t_rect	rect;

	rect.x = x;
	rect.y = y;
	rect.largeur = l;
	rect.hauteur = h;
	return (rect);
}
