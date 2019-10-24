int main()
{
	int size;
	size = 7;
	int tab[7] = {0, 1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(tab, size);

	printf("%d%d%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
	return 0;
}
