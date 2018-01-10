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
	char		*line;

	set_environ(environ);
	line = line_input("$>", NULL);
	if (line)
		ft_strdel(&line);
	return (0);
}
