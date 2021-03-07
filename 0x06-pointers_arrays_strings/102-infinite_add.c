#include "holberton.h"

/**
 * _strlen - imprime
 * @s: numero a imprimir
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int marker = 0;

	while (s[marker] != '\0')
		marker++;
	return (marker);
}

/**
 * calc_rest - imprime
 * @a: numero a imprimir
 * @b: rasd
 * @c: efmpf
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int calc_rest(int a, int b, int c)
{
	if ((a + b + c) > 9)
		return (1);
	return (0);
}

/**
 * v_v - imprime
 * @p1: numero a imprimir
 * @n1: dajdskj
 * @p2: skjd
 * @p3: nogsd
 * @rs: dfgdfh
 * @r: fioansfo
 * @n2: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *v_v(char *n1, int *p1, int *p2, int *p3, int *rs, char *r, char *n2)
{
	while ((*p1 > 0) && (*p2 > 0))
	{
		(*p1)--;
		(*p2)--;
		r[*p3] = '0' + (((n1[*p1] - '0') + (n2[*p2] - '0') + *rs) % 10);
		*rs = calc_rest(n2[*p2] - '0', n1[*p1] - '0', *rs);
		*p3 = *p3 - 1;
	}
	(*p1)--;
	(*p2)--;
	return (r);
}

/**
 * viendo_voy - imprime
 * @p1: numero a imprimir
 * @n1: dajdskj
 * @p3: nogsd
 * @rs: dfgdfh
 * @r: fioansfo
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *viendo_voy(char *n1, int *p1, int *p3, int *rs, char *r)
{
	while (*p1 >= 0)
	{
		r[*p3] = ((n1[*p1] - '0') + *rs) % 10 + '0';
		*rs = calc_rest(0, n1[*p1] - '0', *rs);
		(*p1)--;
		(*p3)--;
	}
	return (r);
}

/**
 * infinite_add - imprime
 * @n1: numero a imprimir
 * @n2: dajdskj
 * @r: nogsd
 * @size_r: fioansfo
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int p1 = _strlen(n1), p2 = _strlen(n2), p3 = (size_r - 2), rs = 0, counter;

	if ((p1 > (size_r - 1)) || (p2 > (size_r - 1)))
		return (0);
	r = v_v(n1, &p1, &p2, &p3, &rs, r, n2);
	if (p1 < 0)
	{
		r = viendo_voy(n2, &p2, &p3, &rs, r);
		if ((p2 < 0) && (rs == 1))
		{
			if (p3 < 0)
			{
				return (0);
			}
			r[p3] = rs + '0';
			p3--;
		}
	}
	else
	{
		r = viendo_voy(n1, &p1, &p3, &rs, r);
		if ((rs == 1) && (p3 < 0))
			return (0);
		r[p3] = rs + '0';
		p3--;
	}
	counter = 0;
	p3++;
	while (p3 != (size_r - 1))
	{
		r[counter] = r[p3];
		counter++;
		p3++;
	}
	r[counter] = '\0';
	return (r);
}
