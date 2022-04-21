void main(){
	
	int x;
	int NS;
	
	printf ("diga o seu salario :");
	scanf  ("%d", &x);
		
	if ( x <= 500) {
		
		
		NS = x + ( x * 50 / 100 ); 
		printf (" seu novo salario e: %d " , NS );
	}
	if ( x > 500 && x <= 1000 ) {
		
		
		NS = x + ( x * 40 / 100 ); 
		printf (" seu novo salario e: %d " , NS );
	}
	if ( x > 1000 && x <= 2000 ) {
		
		
		NS = x + ( x * 30 / 100 ); 
		printf (" seu novo salario e: %d " , NS );
	}
	if ( x > 2000 && x <= 2500 ) {
		
		
		NS = x + ( x * 20 / 100 ); 
		printf (" seu novo salario e: %d " , NS );
	}
	if ( x > 2500 ) {
		
		
		NS = x + ( x * 10 / 100 ); 
		printf (" seu novo salario e: %d " , NS );
	}
	
}
