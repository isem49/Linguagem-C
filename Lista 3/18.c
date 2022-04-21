void main(){
	
	int a;
	int b;
	int x;

	printf (" Diga um valor para a: ");
	scanf  ("%d", &a);
	printf (" Diga um valor para b: ");
	scanf  ("%d", &b);
	
	x = b;
	b = a;
	a = x;
	
	printf (" antes da troca \n ");
	printf (" a valia: %d\n ", b );
	printf (" b valia: %d\n ", a );
	printf (" depois da troca \n ");
	printf (" a vale: %d\n ", a );
	printf (" b vale: %d\n ", b );	
	system ("pause");
	
	
}
