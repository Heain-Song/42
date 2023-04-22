
#include <stdlib.h>
#include <stdio.h>

typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

/*void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x
		|| tab[cur.y][cur.x] != to_fill)
		return;

	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}*/

void	flood_fill(char **tab, t_point size, t_point begin) //seg fault ? 
{
	char fill = tab[begin.y][begin.x];

	//cur.y = begin.y

	if (begin.x < 0 || begin.y < 0 || begin.x >= size.x || begin.y >= size.y || tab[begin.y][begin.x] != fill)
		return;
	tab[begin.y][begin.x] = 'F';
	flood_fill(tab, size, (t_point){begin.x - 1, begin.y});
	flood_fill(tab, size, (t_point){begin.x + 1, begin.y});
	flood_fill(tab, size, (t_point){begin.x, begin.y - 1});
	flood_fill(tab, size, (t_point){begin.x, begin.y + 1});
}
char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size); // insert zone to malloced area
	// print area before flood_fill
	for (int i = 0; i < size.y; ++i) 
		printf("%s\n", area[i]);
	printf("\n");

	// begin point
	t_point begin = {7, 4};
	// flood_fill
	flood_fill(area, size, begin);
	// print area after flood_fill
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
