/**
**	\file	main.c
**	\author	Alexis Guérin
**	\date	4 décembre 2017
*/

#include "twenty_onesh.h"

/**
**	Entrée du programme
*/

int	main(void)
{
	extern char	**environ;
	char		**env;
	char		*line;

	line = NULL;
	env = dupenv((const char**)environ, ft_strlendouble(environ));
	while (!ft_strequ(line, "exit"))
	{
		line ? ft_strdel(&line) : NULL;
		line = line_input("$>", NULL);
		ft_putendl("");
	}
	line ? ft_strdel(&line) : NULL;
	env ? ft_strdeldouble(&env) : NULL;
	if (!env)
		ft_putendl("okay");
	while (1)
		;
	return (0);
}
