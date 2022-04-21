void main(){
	
	int a;
	int m;
	int d;
	int dt;
	
	printf (" Diga sua idade: ");
	scanf ("%d", &a );
	printf (" Quantos meses: ");
	scanf ("%d", &m );
	printf (" Quantos dias: ");
	scanf ("%d", &d );
	
	dt = ( 365 * a ) + ( 30 * m ) + d;
	
	printf ( " Sua idade em dias e: %d\n ", dt);
	system ("pause");
 	
	
	
}
