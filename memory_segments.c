#include <stdlib.h>

const int LENGTH = 10;
int width = 5;

int to_minutes (int hours, int minutes) {
	static int counter = 0;
	++counter;
	int c = 0;
	++c;
	return 60 * hours + minutes;
}

int main(void) {
	int a = 18;
	int b = 33;
	int total = to_minutes (a, b);
	total = to_minutes (b, a);

	int *ptr_a = &a;
	const int *ptr_LENGTH = &LENGTH;
	int *tab = malloc (LENGTH * sizeof(int));
	tab[0] = 31;
	*(tab + 1) = 43;
	free (tab);
	tab = NULL;

	return 0;
}
