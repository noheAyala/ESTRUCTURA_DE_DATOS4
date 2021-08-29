#include<stdio.h>
#include<math.h>

int main(void){
	
float a, b, c, s, area;
int NombreExcesivamenteLargo;



printf("\n Ingrese primer valor ");
scanf("%f",&a);
setbuf ( stdin, NULL );
printf("\n Ingrese segundo valor ");
scanf("%f",&b);
setbuf ( stdin, NULL );
printf("\n Ingrese tercer valor ");
scanf("%f",&c);
setbuf ( stdin, NULL );

s=(a+b+c)/(2);
area=sqrt(s*(s-a)*(s-b)*(s-c));



if(a==b&&a==c)
{
printf("\n El triangulo es equilatero y su area es: %f", NombreExcesivamenteLargo);

}
else if(a==b||a==c||b==c)
{
printf("\n El triangulo es isosceles y su area es: %f", area);
}
else if(a!=b&&a!=b&&b!=c)
{
printf("\n El triangulo es escaleno y su area es: %f", area);
}
setbuf ( stdin, NULL );
getchar();

}
