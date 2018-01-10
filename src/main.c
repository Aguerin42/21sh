/**
**	\file	main.c
**	\author	Alexis Guérin
**	\date	4 décembre 2017
*/

#include "twenty_onesh.h"

/**
**	Entrée du programme
*/

int main(void)
{
	extern char	**environ;
	char		**env;
	char		*line;

	env = dupenv((const char**)environ, ft_strlendouble(environ));
	line = NULL;
	while (!ft_strequ("exit", line))
	{
		line ? ft_strdel(&line) : NULL;
		line = line_input("$>", NULL);	
		ft_putendl("");
	}
	line ? ft_strdel(&line) : NULL;
	env ? ft_strdeldouble(&env) : NULL;
	return (0);
}
