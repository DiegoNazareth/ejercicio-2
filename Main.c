Para este ejercicio puede pedir las definiciones de estructuras y contestar cada una de /*
las preguntas que se presentan en seguida:
// definición de la estructura de un piso
struct Tpiso {
int m2; /* metros cuadrados del piso */
int num_h; /* numero de habitaciones */
float precio; /* precio en euros */
} ;
// una planta es un vector de pisos
struct Tplanta {
int num_pisos; /* numero de pisos de la planta */
Tpiso piso [MAXPI];
};
// un edificio es un vector de plantas
struct Tedificio {
int num_plantas; / * numero de plantas del edificio * 
Tplanta planta [MAXPL];
};
// una calle es un vector de edificios
struct Tcalle {
int num_edificios; /* numero de edificios de la calle *
Tedificio edificio [MAXE];
};
Suponga que en el programa principal se han hecho las siguientes declaraciones:
int main () {
Tcalle mi_calle;
Tpiso
return 0
a) Escriba las instrucciones que permiten mostrar el precio del piso 2 de la planta 1 del edificio 4.
b) Copie en la variable p los datos del piso 1 de la planta 0 del edificio 2.
c) Escriba las instrucciones que permitan mostrar los metros cuadrados totales del edificio 3.
d) Escriba las instrucciones que permiten mostrar el precio del piso más caro de la calle. * /
// definici�n de la estructura de un piso
struct Tpiso {
	int m2; /* metros cuadrados del piso */
	int num_h; /* numero de habitaciones */
	float precio; /* precio en euros */
} ;
// una planta es un vector de pisos
struct Tplanta {
	int num_pisos; /* numero de pisos de la planta */
	Tpiso piso [MAXPI];
};
// un edificio es un vector de plantas
struct Tedificio {
	int num_plantas; /* numero de plantas del edificio */
	Tplanta planta [MAXPL];
};
// una calle es un vector de edificios
struct Tcalle {
	int num_edificios; /* numero de edificios de la calle */
	Tedificio edificio [MAXE];
};

int main () {
	Tcalle mi_calle;
	Tpiso p;
	
	//a) mostrar el precio del piso 2 de la planta 1 del edificio 4.
       cout<< mi_calle.edificio[4].palnta[1].piso[2].precio;
	
	//b) Copie en la variable p los datos del piso 1 de la planta 0 del edificio 2.
         p.m2=mi_calle.edificio[2].planta[0].piso[1].m2;
         p.num_h=mi_calle.edificio[2].planta[0].piso[1].num_h;
         p.precio=mi_calle.edificio[2].planta[0].piso[1].precio;
         
	//c) Escriba las instrucciones que permitan mostrar los metros cuadrados totales del edificio 3
	     int sum;
		 int total=0;
		 for(int i=0; i<mi_calle.edificio[3].num_plantas; i++)
	     {
	     	sum=0;
	     	for(int j=0; j<mi_calle.edificio[3].planta[i].num_pisos; j++)
	     	{
	     		sum=sum+ mi_calle.edificio[3].planta[i].piso[j].m2;
	     	}
	     	 total=total+sum;
	     }
	     cout<<endl<<total;
	     
	//d) Escriba las instrucciones que permitan mostrar el precio del piso m�s caro de la calle.
	     float aux=0;
	   for(int k=0; k<mi_calle.num.edificios; k++)
	   {
	   	   for(int i=0; i<mi_calle.edificio[k].num_plantas; i++)
	     {
	     	for(int j=0; j<mi_calle.edificio[k].planta[i].num_pisos; j++)
	     	{
	     		if(mi_calle.edificio[k].planta[i].piso[j].precio>aux)
	     		    aux=mi_calle.edificio[k].planta[i].piso[j].precio;
	     	}
	     }
	   } 
	   
	   cout<<endl<<"El piso mas caro: "<<aux;
	
	
	
return 0;
}


   

   
