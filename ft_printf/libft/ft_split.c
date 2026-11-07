/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 11:49:04 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/16 11:33:41 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Cuenta las palabras q hay para liego hacer: 
static int	ft_divpalabras(char *frase, int divisor)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (frase[0] != (char)divisor && frase[0] != '\0')
		j++;
	while (frase[i] != '\0')
	{
		if (frase[i] == (char)divisor && frase[i] != frase[i + 1])
		{
			if (frase[i + 1] != '\0')
				j++;
		}
		i++;
	}
	return (j);
}

// Cuenta las letras de cada array hasta que encuentra un divisor o \0
static int	ft_contarletras(char *frase, int i, int divisor)
{
	int	j;

	j = 0;
	while (frase[i] == (char)divisor && frase[i] != '\0')
		i++;
	while (frase[i] != '\0')
	{
		if (frase[i] != (char)divisor)
			j++;
		if (frase[i + 1] == (char)divisor || frase[i + 1] == '\0')
			return (j + 1);
		i++;
	}
	return (0);
}

// Rellena cada array dentro del array list
// 	caja_grande = malloc((i + 1) * sizeof(char *));
static char	*ft_rellenar(char *frase, int i, int divisor)
{
	int		j;
	char	*res;

	res = malloc(ft_contarletras(frase, i, divisor));
	if (!res)
		return (NULL);
	while (frase[i] == (char)divisor && frase[i] != '\0')
		i++;
	j = 0;
	while (frase[i] != '\0')
	{
		res[j] = frase[i];
		i++;
		j++;
		if (frase[i] == (char)divisor || frase[i] == '\0')
		{
			res[j] = '\0';
			return (res);
		}
	}
	return (NULL);
}

// Le dice al array desde donde empezar para copiar bien
// A parte tengo aqui la señal de -1 pq no me cabía en el split
// simplemente si falla hace que se limpie todo lo demás
static int	ft_inicio(char *s1, int divisor, int i, int k)
{
	char	**caja;

	if (i == -1)
	{
		caja = (char **)s1;
		while (k > 0)
		{
			k--;
			free(caja[k]);
		}
		free(caja);
		return (0);
	}
	if ((s1[0] != divisor && k == 0))
		return (i);
	while (s1[i] != divisor && s1[i] != '\0')
		i++;
	while (s1[i] == divisor && s1[i] != '\0')
		i++;
	return (i);
}

// El split  		
// if (!caja_grande[k] && !ft_inicio((char *)caja_grande, c, -1, k))
// el truquito del -1 pq no hace las dos comprobaciones
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**caja_grande;

	if (!s)
		return (NULL);
	i = ft_divpalabras((char *)s, c);
	caja_grande = malloc((i + 1) * sizeof(char *));
	if (!caja_grande)
		return (NULL);
	k = 0;
	j = 0;
	while (i > k)
	{
		j = ft_inicio((char *)s, c, j, k);
		caja_grande[k] = ft_rellenar((char *)s, j, c);
		if (!caja_grande[k] && !ft_inicio((char *)caja_grande, c, -1, k))
			return (NULL);
		k++;
	}
	caja_grande[k] = NULL;
	return (caja_grande);
}

// int main(void)
// {
// 	char *frase = "Hola me llamo  Manuel   Jusdado Gonzalez fallas?  ";
// 	char c = ' ';
// 	char **caja = ft_split(frase ,c);
// 	int x = 0;
//     while (caja[x] != NULL)
//     {
//         printf("%s ", caja[x]);
//         free(caja[x]);
//         x++;
//     }
//     free(caja);
//     return 0;
// }