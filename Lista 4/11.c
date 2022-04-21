void main(){
	
	int x;

	printf(" Digite un valor para x: ");
	scanf (" %d", &x );
	
	if ( x % 5 == 0 ) {
		
		printf (" %d e divisivel por 5 \n " , x );	
	}
	if ( x % 10 == 0 ) {
		
		printf ( " %d e divisivel por 10\n  ", x );
	}
		if ( x % 2 == 0 ) {
		
		printf ( " %d e divisivel por 2 \n ", x );
	}
	if ( x % 5 != 0 && x % 10 != 0 && x % 2 != 0 )
		
		printf (" %d nao e divisivel por 5, nem por 10 e nem por 2\n  ", x );
		
	}
		
