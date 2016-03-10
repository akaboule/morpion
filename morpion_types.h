/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morpion_types.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 14:52:51 by jleu              #+#    #+#             */
/*   Updated: 2016/03/10 19:52:38 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MORPION_TYPES_H
# define MORPION_TYPES_H

typedef struct	s_rect
{
	int			x;
	int			y;
	int			largeur;
	int			hauteur;
	int			pos;
}				t_rect;

typedef struct	s_circle
{
	int			x;
	int			y;
	int			r;
}				t_circle;

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

typedef struct	s_window
{
	void		*win;
	int			largeur;
	int			hauteur;
}				t_window;

typedef struct	s_env
{
	t_window	win;
	void		*mlx;
	t_rect		rect[9];
	int			tab[9];
	int			joueur;
	int			cpt_tour;
}				t_env;

#endif
