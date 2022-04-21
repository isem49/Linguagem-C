void main(){
	
	char N[+10];
	int I;
	
	printf ("Diga seu nome : ");
	scanf  ( "%s", &N ); 
	printf ("Diga sua idade : ");
	scanf  ( "%d", &I );
	
		
	if ( I <= 10) {
		
		printf (" %s voce irar pagar 30 reais", N );
		
	}
	if ( I > 10 && I <= 29 ) {
		
		printf (" %s voce irar pagar 60 reais", N );
		
	}
	if ( I > 29 && I <= 45 ) {
		
		printf (" %s voce irar pagar 120 reais", N );
		
	}
	if ( I > 45 && I <= 59 ) {
		
		printf (" %s voce irar pagar 150 reais", N );
		
	}
		if ( I >= 59 && I <= 65 ) {
		
		printf (" %s voce irar pagar 250 reais", N );
		
	}
		if ( I > 65 ) {
		
		printf (" %s voce irar pagar 400 reais", N );
		
	}
	
}

