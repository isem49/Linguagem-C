void main(){

	int a;
	int b;
	int c;
	int d;
	int e;
	int x;
	
	printf ("diga um valor para a: ");
	scanf ( "%d", &a );
	printf ("diga um valor para b: ");
	scanf ( "%d", &b );
	printf ("diga um valor para c: ");
	scanf ( "%d", &c );
	printf ("diga um valor para d: ");
	scanf ( "%d", &d );
	printf ("diga um valor para e: ");
	scanf ( "%d", &e );
	
	x = ( ( pow(3*a,3) + pow (c*b,2) ) / ( 1 + 4*d ) ) - e / 2;
	
	printf (" o valor de a e: %d\n", a);
	printf (" o valor de b e: %d\n", b);
	printf (" o valor de c e: %d\n", c);
	printf (" o valor de d e: %d\n", d);
	printf (" o valor de e e: %d\n", e);
	printf (" o valor de x e: %d\n", x);
	system ("pause");
}
