void main(){
	
	int h;
	int m;
	int s;
	int st;
	
	printf (" Diga o tempo de duração em segundos: ");
	scanf ("%d", &st );
	
	h =  ( st / 60 ) / 60;
	m =	( st / 60 ) % 60; 
	s = ( st % 60 ) % 60;
	
	printf ( " o evento tem: %d horas %d minutos e %d segundos \n " , h , m , s );
	
	
	system ("pause");
 	
}
