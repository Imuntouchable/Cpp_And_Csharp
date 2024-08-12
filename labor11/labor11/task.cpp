

bool analys(int* a, int n)
{
	int otr = 0;
	for (int i = 0; i < n; i++)
		if ((*(a + i)) < 0) otr++;
	if (otr == n) return true;
	return false;
}

int analysmatr(int** a, int m, int n, int& pervoe, int& posled)
{
	int k = 0;
	for (int i = 0; i < m; i++)
		if (analys(*(a + i), n)) k++;
		if (k == 1) pervoe = k;
		if (k != 1 && k > 0) posled = k  - 1;
	return k;
}

void copy(int* b, int* a, int n)
{
	for (int i = 0; i < n; i++)
		*(b + i) = *(a + i);
}
int** task(int** matr, int m, int n, int& k)
{
	int pervoe = 0;
	int posled = 0;
	k = analysmatr(matr, m, n, pervoe, posled);
	if (!k) return 0;
	int** newmatr = new int* [k];
	k = 0;
	int h = 0;
	for (int i = 0; i < m; i++)
	{
		*(newmatr + k) = new int[n];
		copy(*(newmatr + k), *(matr + i), n);
		k++;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
		{
			h = newmatr[pervoe][i];
			newmatr[pervoe][i] = newmatr[posled][i];
			newmatr[posled][i] = h;
		}
	}
	return newmatr;
}