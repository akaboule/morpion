/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morpion.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 16:04:46 by jleu              #+#    #+#             */
/*   Updated: 2016/03/10 20:43:15 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "morpion.h"

void			ft_del_env(t_env *env)
{
	int			cpt;

	mlx_destroy_window(env->mlx, env->win.win);
	free(env);
	exit(1);
}

t_window		ft_new_window(void *mlx)
{
	t_window	win;

	win.hauteur = 800;
	win.largeur = 800;
	win.win = mlx_new_window(mlx, win.largeur, win.hauteur, "MORPION");
	return (win);
}

int				mouse_hook(int button, int x, int y, void *param)
{
	t_rect	*rect;
	t_env	*env;
	int		retour;

	env = (t_env*)param;
	if ((rect = ft_coord_in_rect(env->rect, x, y)))
	{
		retour = ft_jeux(rect, env);
		if (retour == 2 || retour == 1 || retour == 0)
		{
			ft_putstr("and the winner is ");
			if (retour)
			{
				ft_putstr("the player ");
				ft_putnbr(retour);
				ft_putchar('\n');
			}
			else
				ft_putendl("nobody");
			ft_del_env(env);
			return(1);
		}
	}
	return (0);
}

int				main()
{
	t_env		*env;
	int			cpt;

	cpt = -1;
	env = (t_env*)malloc(sizeof(t_env));
	env->mlx = mlx_init();
	env->win = ft_new_window(env->mlx);
	env->joueur = 1;
	env->cpt_tour = 0;
	while (++cpt < 9)
	{
		env->rect[cpt] =
			ft_new_rect((((cpt % 3 + 1) * ((env->win.largeur - 150) / 3)) - 150),
						(((cpt / 3 + 1) * ((env->win.hauteur - 150) / 3)) - 150),
						((env->win.largeur - 150) / 3),
						((env->win.hauteur - 150) / 3));
		env->rect[cpt].pos = cpt;
		env->tab[cpt] = 0;
		ft_draw_rect(env, env->rect[cpt]);
	}
	mlx_mouse_hook(env->win.win, &mouse_hook, (void*)env);
	mlx_loop(env->mlx);
}
