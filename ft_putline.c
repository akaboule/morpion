/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:09:48 by jleu              #+#    #+#             */
/*   Updated: 2016/03/10 17:25:36 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "morpion.h"

void		ft_putline(t_env *env, t_point p1, t_point p2)
{
	double	a;
	double	b;
	int		croiss_y;
	int		croiss_x;

	croiss_y = (p1.y < p2.y);
	if (p1.x != p2.x)
	{
		a = (double)(((double)p2.y - (double)p1.y) / ((double)p2.x - (double)p1.x));
		b = (double)p1.y - a * (double)p1.x;
		croiss_x = (p1.x < p2.x);
		while ((p1.x < p2.x && croiss_x) || (p2.x < p1.x && !croiss_x))
		{
			mlx_pixel_put(env->mlx, env->win.win, p1.x, p1.y, 0xffffff);
			while ((croiss_y && p1.y < (int)(a * (double)p1.x + b))
					|| (!croiss_y && p1.y > (int)(a * (double)p1.x + b)))
			{
				mlx_pixel_put(env->mlx, env->win.win, p1.x, p1.y, 0xffffff);
				p1.y += (croiss_y) ? 1 : -1;
			}
			p1.x += (croiss_x) ? 1 : -1;
		}
	}
	if (p1.x == p2.x)
		while ((croiss_y && ++p1.y <= p2.y) || (!croiss_y && --p1.y >= p2.y))
			mlx_pixel_put(env->mlx, env->win.win, p1.x, p1.y, 0xffffff);
}
