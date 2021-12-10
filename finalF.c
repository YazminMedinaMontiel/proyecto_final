#include<stdio.h>
#include <math.h>
#define BASE10 10
#define PI 3.141592

//Función principal
int main ()

{
	//Mensaje de bienvenida
	printf("\n\n\t\t\tBienvenido a mi calculadora :)\n\n");
	

	//Declarar variables a utilizar
	int n1,n2,res,op,oq,i,n,radianes;
	char au=163, ao=162, aa=160, ae=130, ai=161;
	double numero, potencia, elevado;
	double exponencial,xy;
	double angulo, conversion;
	float a1,a2,radical;
	float x, seno, coseno, tangente, secante, cosecante, cotangente, rad, teta;
	float  arcsin,arccos, arctan;
	float logDiez, logN, base;
	
	
	do
	{
		printf("\tMen%c principal\n\n",au);
		printf("Elija la opci%cn deseada y luego presione la tecla enter\n",ao);
		printf("1) Operaciones b%csicas\n",aa);
		printf("2) Potenciaci%cn\n",ao);
		printf("3) Ra%cz cuadrada\n",ai);
		printf("4) Funciones trigonom%ctricas\n",ae);
		printf("5) Logaritmos\n");
		printf("6) Conversiones de grados a radianes o viceversa\n");
		printf("7) Salida\n");
		
		//Seleccionar opción
		scanf("%d",&op);
		
		switch(op)
		{
		
			default:
				printf("Opci%cn no valida.\n",ao);
				break;	
			
			case 1:
					printf("Se seleccion%c 'Operaciones basicas'.\n",ao);
					printf("\tMenu\n\n");
					printf("Elegir la opci%cn deseada\n",ao);
					printf("1) Suma\n");
					printf("2) Resta\n");
					printf("3) Multiplicar\n");
					printf("4) Dividir\n");
					printf("5) Salida\n");
		
					//Seleccionar opción
					scanf("%d",&oq);
					
					switch(oq)
					{
						default:
							printf("Opci%cn no v%clida.\n",ao,aa);
							break;
						case 1:
							printf("Se seleccion%c 'Sumar'.\n",ao);
							//Solicitar variables
							printf("Ingrese 2 n%cmeros separados por coma: ",au);
							scanf("%d,%d", &n1,&n2);
							//Realizar la suma
							res=n1+n2;
							printf("La suma de %d y %d es: %d\n",n1,n2,res);
							break;
			
						case 2:
							printf("Se seleccion%c 'Restar'.\n",ao);
							//Solicitar variables
							printf("Ingrese 2 n%cmeros separados por coma: ",au);
							scanf("%d,%d", &n1,&n2);
							//Realizar la resta
							res=n1-n2;
							printf("La resta de %d y %d es: %d\n",n1,n2,res);
							break;
			
						case 3:
							printf("Se seleccion%c 'Multiplicar'.\n",ao);
							//Solicitar variables
							printf("Ingrese 2 n%cmeros separados por coma: ",au);
							scanf("%d,%d", &n1,&n2);
							//Realizar la multiplicación
							res=n1*n2;
							printf("La multiplicaci%cn de %d y %d es: %d\n",ao,n1,n2,res);
							break;
			
						case 4:
							printf("Se seleccion%c 'Dividir'.\n",ao);
							//Realizar la división
							printf("Ingrese 2 n%cmeros separados por coma: ",au);
							scanf("%d,%d", &n1,&n2);
		
						if (n2==0)
						{
							printf("No se puede realizar la divisi%cn entre 0\n",ao);
						}
	
						else 
						{
							res=n1/n2;
							printf("La divisi%cn de %d y %d es: %d\n",ao,n1,n2,res);
						}
						break;
						
						case 5: 
							break;
					}
					break;
			case 2: 
				printf("Se seleccion%c 'Potenciaci%cn\n'.\n",ao,ao);
				//Solicitar variables
				printf("Ingrese la base de la potencia y el n%cmero al que lo quiere elevar separados por coma: ",au);
				scanf("%lf, %lf",&numero,&potencia);
				double elevado = pow(numero, potencia);
				//Caclular potencia
				printf("%.1lf elevado a la potencia %.1lf es %.4lf\n", numero, potencia, elevado);
				break;
				
			case 3: 
				printf("Se seleccion%c 'Raiz cuadrada'.\n",ao);
				//Solicitar variables
				printf("Ingrese el n%cmero: ",au);
				scanf("%f", &a1);
				radical=sqrt(a1);
				//Calcular raiz cuadrada
				printf("La raiz cuadrada de %f es %.4f\n",a1,radical);
				break;	
			
			case 4: 
				//Menú de las funciones trigonométricas
				printf("Se seleccion%c 'Funciones trigonom%ctricas'.\n",ao,ae);
				printf("Por favor ingrese la funci%cn trigonom%ctrica que necesita:\n",ao,ae);
				printf("1. Seno \n");
				printf("2. Coseno \n");
				printf("3. Tangente \n");
				printf("4. Cotangente \n");
				printf("5. Secante \n");
				printf("6. Cosecante \n");
				printf("7. Arco-seno \n");
				printf("8. Arco-coseno \n");
				printf("9. Arco-tangente \n");
				printf("10. Salir \n");
				
				//Seleccionar opción
				scanf("%d", &i);
				
				system("CLS");
					switch(i)
					{
						case 1:
							system("CLS");
							//Solicitar variables
							printf("Ingrese un %cngulo para la funci%cn trigonom%ctrica:\n",aa,ao,ae);
							scanf("%f", &teta);
							rad = teta*PI/180;
							//Calcular seno
							seno = sin(rad);
							printf("El seno del %cngulo es %.4f\n",aa,seno);
							//system("PAUSE");
							break;
		
						case 2:
							system("CLS");
							//Solicitar variables
							printf("Ingrese un %cngulo para la funci%cn trigonom%ctrica:\n",aa,ao,ae);
							scanf("%f", &teta);
							//Calcular coseno
							rad = teta*PI/180;
							coseno = cos(rad);
							printf("El coseno del %cngulo es %.4f\n",aa,coseno);	
							//system("PAUSE");
							break;
		
						case 3:
							system("CLS");
							//Solicitar variables
							printf("Ingrese un %cngulo para la funci%cn trigonom%ctrica:\n",aa,ao,ae);
							scanf("%f",&teta);
							//Condición para calcular tangente
							if(teta==90)||(teta==270)
							{
								printf("Error, no se puede calcular la tangente del %cngulo ingresado\n",aa);
							}
							else
							{
							//Calcular tangente
							rad=teta*PI/180;
							tangente=tan(rad);
							printf("La tangente del %cngulo es %.4f\n",aa,tangente);	
							}
							//system("PAUSE");
							break;
		
						case 4:
							system("CLS");
							//Solicitar variables
							printf("Ingrese un %cngulo para la funci%cn trigonom%ctrica:\n",aa,ao,ae);
							scanf("%f", &teta);
							//Condición para calcular cotangente
							if(teta==0)||(teta==360)
							{
								printf("Error, no se puede calcular la cotangente del %cngulo ingresado\n",aa);
							}
							else
							{
							//Calcular cotangente
							rad = teta*PI/180;
							cotangente = 1/tan(rad); 
							printf("La cotangente del %cngulo es %.4f\n",aa,cotangente);	
							}
							//system("PAUSE");
							break;
							
						case 5:
							system("CLS");
							//Solicitar variables
							printf("Ingrese un %cngulo para la funci%cn trigonom%ctrica:\n",aa,ao,ae);
							scanf("%f", &teta);
							//Condición para calcular secante
							if(teta==90)||(teta==270)
							{
								printf("Error, no se puede calcular la secante del %cngulo ingresado\n",aa);
							}
							else
							{
							//Calcular secante
							rad = teta*PI/180;
							secante = 1/cos(rad);
							printf("La secante del %cngulo es %.4f\n",aa,secante);	
							}
							//system("PAUSE");
							break;
							
						case 6:
							system("CLS");
							//Solicitar variables
							printf("Ingrese un %cngulo para la funci%cn trigonom%ctrica:\n",aa,ao,ae);
							scanf("%f", &teta);
							//Condición para calcular cosecante
							if(teta==0)||(teta==360)
							{
								printf("Error, no se puede calcular la cosecante del %cngulo ingresado\n",aa);
							}
							else
							{
							rad = teta*PI/180;
							//Calcular cosecante
							cosecante = 1/sin(rad);
							printf("La cosecante del %cngulo es %.4f\n",aa,cosecante);
							}
							//system("PAUSE");
							break;
							
						case 7:
							system("CLS");
							//Solicitar variables
							printf("Ingrese un %cngulo para la funci%cn trigonom%ctrica:\n",aa,ao,ae);
							scanf("%f", &teta);
							//Condición para calcular el arcoseno
							if(teta>1)
							{
								printf("Error, no se puede calcular el arco-seno del %cngulo ingresado\n",aa);
							}
							else
							{
							//Calcular arcoseno
							arcsin = asin(teta);
							printf("El arco-seno del %cngulo es %.4f\n",aa,arcsin);
							}
							//system("PAUSE");
							break;
							
						case 8:
							system("CLS");
							//Solicitar variables
							printf("Ingrese un %cngulo para la funci%cn trigonom%ctrica:\n",aa,ao,ae);
							scanf("%f", &teta);
							//Condición para calcular arco-coseno
							if(teta>1)
							{
								printf("Error, no se puede calcular el arco-coseno del %cngulo ingresado\n",aa);
							}
							else
							{
							//Calcular arcocoseno
							arccos = acos(teta);
							printf("El arco-coseno del %cngulo es %.4f\n",aa,arccos);
							}
							//system("PAUSE");
							break;
							
						case 9:
							system("CLS");
							//Solicitar variables
							printf("Ingrese un %cngulo para la funci%cn trigonom%ctrica:\n",aa,ao,ae);
							scanf("%f", &teta);
							//Calcular arcotangente
							arctan = atan(teta);
							printf("El arco-tangente del %cngulo es %.4f\n",aa,arctan);
							//system("PAUSE");
							break;
				
						case 10:
							break;
							
						default:
							printf("Opci%cn no valida.\n",ao);
							break;
													
					}
					break;
			case 5: 
				//Menú de los logartimos
				printf("Por favor ingrese la funci%cn que necesita:\n",ao);
				printf("1) Logaritmo base 10 \n");
				printf("2) Logaritmo natural \n");
				printf("3) Funci%cn exponencial \n",ao);
				printf("4) Base 10 elevada a la n \n");
				printf("5) Salir \n");
				
				//Selección de opción
				scanf("%d", &i);
				
				//Llamar a la función borrar
				system("CLS");
				
					switch(i)
					{
						case 1:
							system("CLS");
							//Solicitar variables
							printf("Ingrese el logaritmo de base 10 que desee:\n");
							scanf("%d", &n);
							logDiez = (float)log10(n);
							//Calcular el logaritmo de base 10
							printf("El resultado es %.4g\n",logDiez);
							break;
		
						case 2:
							system("CLS");
							//Solicitar variables
							printf("Ingrese el logaritmo natural que desea:\n");
							scanf("%d", &n);
							//Calcular el logaritmo natural
							logN = (float)log(n);
							printf("El resultado es %.4g\n",logN);
							system("PAUSE");
							break;
		
						case 3:
							system("CLS");
							//Solicitar variables
							printf("Ingrese el exponente de la funci%cn euler:\n",ao);
							scanf("%lf", &xy);
							// Calcular el resultado de euler
							exponencial = exp(xy);
							printf("El resultado es %.4lf\n",exponencial);
							system("PAUSE");
							break;
		
						case 4:
							system("CLS");
							//Solicitar variables
							printf("Ingrese a n:\n");
							scanf("%d", &n);
							//Calcular el resultado del logaritmo
							base=(float)pow(BASE10, n);
							printf("El resultado es %.1f\n",base);
							system("PAUSE");
							break;
							
						case 5:
							break;
							
						default:
							printf("Opci%cn no valida.\n",ao);
							break;
					}
					break;
			case 6: 
				//Menú sobre la conversión de grados a radianes o viceversa
				printf("\tMenu de conversiones\n\n");
				printf("Elegir la opci%cn deseada\n",ao);
				printf("1) De grados a radianes\n");
				printf("2) De radianes a grados\n");
				printf("3) Salir\n");
		
				//Seleccionar opción
				scanf("%d",&oq);
		
				switch(oq)
				{
		
					default:
						printf("Opci%cn no valida.\n",ao);
						break;	
			
					case 1:
						printf("Se seleccion%c 'De grados a radianes'.\n",ao);
						//Solicitar variables
						printf("Ingrese el valor de su %cngulo: ",aa);
						scanf("%lf", &angulo);
						//Realizar la conversión
						conversion= (angulo*PI)/180;
						printf("La conversi%cn a radianes de %lf es: %lf\n",ao,angulo,conversion);
						break;
			
					case 2:
						printf("Se seleccion%c 'De radianes a grados'.\n",ao);
						//Solicitar variables
						printf("Ingrese el valor de el %cngulo ",aa);
						scanf("%lf", &angulo);
						//Realizar la conversión
						conversion= (angulo*180)/PI;
						printf("La conversi%cn a grados de %lf es: %lf\n",ao,angulo,conversion);
						break;
			
					case 3:
						break;
				}
				break;
			case 7: 
				break;
				
		}
		
	}
	while (op != 7);
}
