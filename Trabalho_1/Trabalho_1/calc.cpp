//Biblioteca de funções matemáticas

int soma(int var_1, int var_2)
{
	int res;
	res = var_1 + var_2;
	return res;
}
int subtracao(int var_1, int var_2)
{
	int res;
	res = var_1 - var_2;
	return res;
}
float multiplicacao(float var_1, float var_2)
{
	float res;
	res = var_1 * var_2;
	return res;
}
float divisao(float var_1, float var_2)
{
	float res = 0;
	if(var_1 != 0 && var_2 != 0) res = var_1 / var_2;
	return res;
}
double fatorial(int var)
{
	double res = 1;
	if (var < 0) return 0;
	if (var == 0 || var == 1) return res;
	for (int i = 1; i <= var; i++)
	{
		res = res * i;
	}
	return res;
}
int num_primos(int var)
{
	int resto;
	if (var <= 0) return -1;
	for (int i = 2; i < var; i++)
	{
		resto = var % i;
		if (resto == 0) return 0;
	}
	return 1;
}
float cosseno(float var)
{
	int a;
	float res, r;
	double f, p;
	res = 0;
	while (var > 6.283185) var = var - 6.283185;
	while (var < -6.283185) var = var + 6.283185;
	for (int i = 0; i < 15; i++)
	{
		p = 1;
		a = i * 2;
		f = fatorial(a);
		for (int j = 1; j <= a; j++) //'var' elevado a 'a'
		{
			p = p * var;
		}
		r = p / f;
		if ((i % 2) == 1) r = -r;
		res = res + r;
	}
	return res;
}
double alg_neperiano(int var)
{
	double a, b = 1, c, res = 1;
	for (int i = 1; i < 31; i++)
	{
		a = 1;
		for (int j = 1; j <= i; j++) //'var' elevado a 'i'
		{
			a = a * var;
		}
		b = b * i; //fatorial
		c = a / b;
		res = res + c;
	}
	return res;
}
int somatorio(int var)
{
	int res = 0, dig;
	if (var < 0) var = var * (-1);
	while (var > 0)
	{
		dig = var % 10;
		var = var / 10;
		res = res + dig;
	}
	return res;
}
float raiz_quadrada(float var)
{
	int i;
	float res;
	if (var <= 0) return -1;
	res = var / 2;
	for (i = 0; i < 20; i++)
	{
		res = ((res * res) + var) / (2 * res);
	}
	return res;
}