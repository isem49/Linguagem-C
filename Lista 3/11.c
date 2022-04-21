void main()
{
	
	int n1;
	int n2;
	int n3;
	int MP;
	
	printf ("Diga a primeira nota: ");
	scanf  ("%d", &n1);
	printf ("Diga a segunda nota: ");
	scanf  ("%d", &n2);
	printf ("Diga a terceira nota: ");
	scanf  ("%d", &n3);
	
	
	MP = ( ( n1 * 2 ) + ( n2 * 3 ) + ( n3 * 5 ) ) / ( 2 + 3 + 5 );
	printf ( " A media e: %d\n", MP );
	
	
	
	
	
	system 	("pause");
}   
