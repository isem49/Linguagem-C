void main(){
	
	int x;

	printf(" Digite un valor para x: ");
	scanf (" %d", &x );
	
	if ( x == 5 ) {
		
		printf (" o numero lido e igual a 5 \n");
		
	}
	if ( x == 200 ) {
		
		printf (" o numero lido e igual a 200 \n");
		
	}
	if ( x == 400 ) {
		
		printf (" o numero lido e igual a 400 \n");
		
	}
	if ( x > 500 && x < 1000 ) {
		
		printf (" o numero lido esta entre 500 e 1000 \n");
		
	}
	if (  ( x != 5) && ( x != 200 ) && (x != 400) && ( x < 400 ) || x > 999   ){
		
		printf ("nenhum");
	}
			
}
