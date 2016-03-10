/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coord_in_rect.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 15:32:41 by jleu              #+#    #+#             */
/*   Updated: 2016/03/10 20:29:08 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "morpion.h"

t_rect	*ft_coord_in_rect(t_rect *rect, int x, int y)
{
	int	cpt;

	cpt = 0;
	while (cpt < 9)
	{
		if (rect[cpt].x < x && (rect[cpt].x + rect[cpt].largeur) > x
				&& rect[cpt].y < y && (rect[cpt].y + rect[cpt].hauteur) > y)
			return (rect + cpt);
		cpt++;
	}
	return (NULL);
}
