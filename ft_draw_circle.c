/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_circle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 17:46:39 by jleu              #+#    #+#             */
/*   Updated: 2016/03/10 20:39:39 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "morpion.h"

void		ft_draw_circle(t_env *env, t_rect r)
{
	double cpt;
	t_circle c;

	c = ft_new_circle(r.x + r.hauteur / 2, r.y + r.largeur / 2, r.largeur / 2);
	cpt = 0;
	while (cpt < 2 * M_PI)
	{
		mlx_pixel_put(env->mlx, env->win.win,
				(int)((double)c.x + (double)(c.r) * cos(cpt)),
				(int)((double)c.y + (double)(c.r) * sin(cpt)),
				0xffffff);
		cpt += M_PI / 1024;
	}
}
