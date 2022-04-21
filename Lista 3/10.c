void main(){
	
	int a;
	int m;
	int d;
	int dt;
	
	printf (" Diga sua idade em dias: ");
	scanf ("%d", &dt );
	
	a =  dt / 365;
	m =  ( dt % 365 ) / 30;
	d = ( dt % 365 ) % 30;
	
	
	printf ( " Você tem: %d anos , %d meses e %d dias \n " , a , m , d );
	
	
	system ("pause");
 	
}
