


int cargarFunciones(int numA, int numB)
{
	int funcion;
	int resultSuma=0;
	int resultResta=0;
	int resultProducto=0;
	int resultDivision;
	int resultFactoreoA=0;
	int resultFactoreoB=0;
	int returnSuma;
	int returnResta;
	int returnMultiplicacion;
	int returnDivision;
	int returnFactoreoA;
	int returnFactoreoB;

	cargarNumero (&numA);
	cargarNumero (&numB);

	printf("\nLos valores ingresados son %d y %d",numA,numB);
	printf("\nLista de operaciones\n1: Suma\n2: Resta");
	printf("\n3: Multiplicacion\n4: Division\n5: Factorizacion");
	printf("\nIngrese una opcion: ");
	scanf("%d",&funcion);

	returnSuma = funcSumar(numA, numB, &resultSuma);
	returnResta = funcRestar(numA, numB, &resultResta);
	returnMultiplicacion = funcMultiplicar(numA, numB, &resultProducto);
	returnDivision = funcDividir(numA, numB, &resultDivision);
	returnFactoreoA = funcFactorear(numA, &resultFactoreoA);
	returnFactoreoB = funcFactorear(numB, &resultFactoreoB);

	switch (funcion)
	{
		case 1:
			if (returnSuma == -1)
			{
				printf("Error en la operacion");
			}

			else
			{
			printf("El resultado de la suma es: %d",resultSuma);
			}
			break;

		case 2:
			if (returnResta == -1)
			{
				printf("Error en la operacion");
			}
			else
			{
			printf("El resultado de la resta es: %d",resultResta);
			}
			break;

		case 3:
			if (returnMultiplicacion == -1)
			{
				printf("Error en la operacion");
			}

			else
			{
			printf("El resultado de la multiplicacion es: %d",resultProducto);
			}
			break;

		case 4:
			if (returnDivision == -2)
			{
				printf("No es posible dividir por cero");
			}
			else if (returnDivision == -1)
			{
				printf("Error en la operacion");
			}
			else
			{
				printf("El resultado de la division es: %d",resultDivision);
			}
			break;

		case 5:
			if (returnFactoreoA == -1)
			{
				printf("Error en la operacion");
			}

			else
			{
			printf("El primer valor factorizado es: %d",resultFactoreoA);
			}
			if (returnFactoreoB == -1)
			{
				printf("Error en la operacion");
			}

			else
			{
			printf("\nEl segundo valor factorizado es: %d",resultFactoreoB);
			}
			break;

	}
	return 0;
}

int cargarNumero (int *numero)
{
	int retorno = -1;
	printf("Ingrese un valor: ");
	scanf ("%d",numero);

	if (numero != '\0')
	{
		retorno = 0;
	}

	return retorno;
}


int funcSumar(int numA, int numB, int *resultado)
{
	int retorno = -1;

	if(numA != '\0' && numB != '\0')

	{
		*resultado = numA + numB;
		retorno = 0;
	}

	return retorno;
}

int funcRestar(int numA, int numB, int *resultado)
{
	int retorno = -1;

	if(numA != '\0' && numB != '\0')
    {
		*resultado = numA - numB;
		retorno = 0;
    }

	return retorno;
}

int funcMultiplicar(int numA, int numB, int *resultado)
{
	int retorno = -1;

    if(numA != '\0' && numB != '\0')
    {

    	*resultado = numA * numB;
    	retorno = 0;
    }

    return retorno;
}

int funcDividir(int numA, int numB, int *resultado)
{
	int retorno = -1;

	if(numB == 0)
	{
		retorno = -2;
    }
    else
    {
    	*resultado = numA / numB;
    	retorno = 0;
    }

	return retorno;
}

int funcFactorear(int numero, int *resultado)
{
	int i;
	int acumulador = numero;
    int retorno = -1;

    if(numero > 0)
    {

    	for(i=1; i<numero; i++)
    	{
    		acumulador = acumulador * i;

    	}
    	*resultado = acumulador;
    	retorno = 0;
    }
    return retorno;
}

