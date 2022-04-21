void main(){
	
	int a;
	int b;

	printf(" Digite un valor para x: ");
	scanf (" %d", &a );
	printf(" Digite un valor para y: ");
	scanf (" %d", &b );
	
	if ( a % b == 0 ) {
		
		printf (" %d e divisivel por %d ", a, b);
	
	}
	else {
		
		printf (" %d nao e divisivel por %d", a, b);
		
	}
	
}
