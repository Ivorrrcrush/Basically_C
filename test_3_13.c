void Exc(int* x, int* y) {
	int c = 0;
	c = *x;
	*x = *y;
	*y = c;
}

int main() {
	int a = 10;
	int b = 20;
	int* pa = &a;
	int* pb = &b;
	printf("a=%d b=%d\n",a, b);

	Exc(pa,pb);
	printf("a=%d b=%d\n", a, b);
	return 0;
}
