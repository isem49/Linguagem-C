void main(){
	
	char x[+1000];
	char y[+1000] = "brasilia" ;
	char z[+1000] = "BRASILIA" ;

	

	printf(" Diga a capital do brasil : ");
	scanf (" %c", &x );
	
	if ( x == y || x == z  ) {
		
		printf (" parabens ");
		
	}
	else{
		
		printf (" errou ");
		
	}
	
}
