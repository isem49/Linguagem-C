void main(){
	
	float x;
	float y;
	float s;
	float n1;
	float n2;
	
	printf (" digite um valor para x: ");
	scanf  (" %f", &x);
	printf (" digite um valor para y: ");
	scanf  (" %f", &y);
	
	s = x + y;
	n1 = x / s * 100;
	n2 = y / s * 100;
	
	printf (" a soma e igual a: %f\n", s );	
	printf (" %f corresponde a %f porcento de %f \n", x, n1, s );
	printf (" %f corresponde a %f porcento de %f \n", y, n2, s );
	system ("pause");


}
