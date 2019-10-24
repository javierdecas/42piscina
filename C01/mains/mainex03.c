void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a = 54;
	int b = 5;
	int *div;
	int *mod;

	div = &a;
	mod = &b;

	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d\n", *mod);
	return 0;
}
