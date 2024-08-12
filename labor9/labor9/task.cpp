#include "mainvich.h"

int chetnechet(int& x, int& chet, int& nechet, int n, int mas[]) {
	for (int i = 0; i < n; i++) {
		if (int(mas[i]) % 2 == 0) {
			chet += 1;
		}
		if (int(mas[i]) % 2 != 0) {
			nechet += 1;
			x = mas[i];
		}
	}
	return 0;
}


int task(int mas[], int new_mas[], int& x, int n) {
	int chet = 0;
	int nechet = 0;
	chetnechet(x, chet, nechet, n, mas);
	if (chet > 0 && nechet > 0) {
		int j = 0;
		for (int i = 0; i < n; i++) {
			if (int(mas[i]) % 2 == 0) {
				new_mas[j] = mas[i] - x;
				j++;
			}
		}
		return j;
	}
	return 0;
}
