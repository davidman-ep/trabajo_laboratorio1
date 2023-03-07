#include <iostream>

using namespace std;

#define CASE 1

void valores(int *, int, int);
void fecha(int , int);
int potencia(int x,int y);
int mcm(int,int);
int nummin(int,int);
int nummax(int,int);
int mcd(int,int);
int collatz(int);


int main()
{


#if CASE==1

    char car, tecla=' ';
    cout<<"Identifica caracter ingresado es una vocal,\n"
          "una consonante o ninguna de las 2 e imprime un mensaje según el caso."<<endl<<endl;

    do {
        cout<<"caracter: ";
        cin>>car;
        if((car>64 && car<91) || (car>96 && car<123) ){

            switch (car) {
                case 65: cout<<"es una vocal"<<endl; ;
                break;
                case 69: cout<<"es una vocal"<<endl;
                break;
                case 73: cout<<"es una vocal"<<endl ;
                break;
                case 79: cout<<"es una vocal"<<endl ;
                break;
                case 85: cout<<"es una vocal"<<endl ;
                break;
                case 97: cout<<"es una vocal"<<endl; ;
                break;
                case 101: cout<<"es una vocal"<<endl;
                break;
                case 105: cout<<"es una vocal"<<endl ;
                break;
                case 111: cout<<"es una vocal"<<endl ;
                break;
                case 117: cout<<"es una vocal"<<endl ;
                break;
            default:cout<<"es una consonante"<<endl;
            }
        }
        else {
            cout<<"caracter ingresado no es un caracter."<<endl;
        }
        cout<<"Desea salir oprima la tecla 's': ";
        cin>>tecla;
    } while (tecla!='s');

#endif

#if CASE==2
       short int opcion=0;
       int cantidad=0,denominacion=50000;
       int cont=0;

       cout<<"Programa que determina la minima combinacion de billetes y monedas \n"
       "para cantidad de dinero ingresada"<<endl;

        do{
           cout<<"0.salir\n1.minima combinacion\n";
           cout<<"ingrese opcion: ";cin>>opcion;

           switch (opcion) {

           case 0:
               cout<<"****gracias, fin del programa****"<<endl;
               break;
           case 1:
               cout<<"ingrese la cantidad que desea determinar"<<endl;
               cout<<"ingrese la cantidad: ";cin>>cantidad;
               valores(&cantidad,denominacion,cont);
               denominacion=20000;
               valores(&cantidad,denominacion,cont);
               denominacion=10000;
               valores(&cantidad,denominacion,cont);
               denominacion=5000;
               valores(&cantidad,denominacion,cont);
               denominacion=2000;
               valores(&cantidad,denominacion,cont);
               denominacion=1000;
               valores(&cantidad,denominacion,cont);
               denominacion=500;
               valores(&cantidad,denominacion,cont);
               denominacion=200;
               valores(&cantidad,denominacion,cont);
               denominacion=100;
               valores(&cantidad,denominacion,cont);
               denominacion=50;
               valores(&cantidad,denominacion,cont);
               cout<<"Faltante: "<<cantidad<<endl<<endl;
               break;
           }


       }while (opcion!=0);

#endif

#if CASE==3
       //    Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
           //    si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
           //    imprimir posiblemente año bisiesto.

           int mes, dia;
           cout<<"ingrese el mes: ";
               cin>>mes;
               cout<<"ingrese el dia: ";
               cin>>dia;
           fecha(mes,dia);

#endif
#if CASE==4
           int num1,num2;
           int hora1,min1,hora2,min2;
           bool correcto;
           do {
               cout<<"ingrese numero de hora: ";
               cin>>num1;

               min1=num1%100;
               hora1=(num1-min1)/100;
               if((min1>59 || min1<0) || (hora1>24)){
                   cout<<"hora invalida"<<endl;
                   correcto=false;
               }
               else {
                   correcto=true;
               }
           } while (correcto!=true);

           do {
               cout<<"ingrese numero de hora: ";
               cin>>num2;

               min2=num2%100;
               hora2=(num2-min2)/100;
               if((min2>59 || min2<0) || (hora2>24)){
                   cout<<"hora invalida"<<endl;
                   correcto=false;
               }
               else {
                   correcto=true;
               }

           } while (correcto!=true);

           //num1 sera hora y num2 sera min de la suma de horas

           num2=(min1+min2)%60;
           num1=(hora1+hora2)+((min1+min2)/60);
           num1*=100;
           num1+=num2;
           if(num1>2400){
               cout<<"esta hora supera el rango del dia"<<endl;
           }
           cout<<"la hora es: "<<num1<<endl;

#endif

#if CASE==5
           // patrón en la pantalla, estará determinado un número entero impar que ingrese el usuario.
               int numero;
               cout<<"ingrese un numero impar positivo: ";cin>>numero;
               for(int i=0; i<numero;i++){
                   if (i<=(numero-1)/2){
                       for(int j=0; j<((numero-1)/2)-i ; j++){
                           cout<<" ";
                       }
                       for(int j=0;j<(1+(2*i));j++){
                           cout<<"*";
                       }
                       for(int j=0; j<((numero-1)/2)-i ; j++){
                       cout<<" ";
                       }
                   }
                   else{
                       for(int j=0; j<i-((numero-1)/2) ; j++){
                           cout<<" ";
                       }
                       for(int j=numero; j>(2*(i-(numero-1)/2));j--){
                           cout<<"*";
                       }
                       for(int j=0; j<i-((numero-1)/2) ; j++){
                           cout<<" ";
                       }


                   }
                   cout<<endl;
               }
           //hasta el numero 119 imprime un patron correcto.

#endif

#if CASE==6
       //Escribe un programa que encuentre el valor aproximado
       //del número de euler en base a la siguiente suma infinita:
               int n;
               unsigned long int factorial=1;
               long double e=0;
               cout<<"ingrese el n-esimo numero de aproximacion: ";
               cin>>n;

               for (int i=0;i<n;i++ ) {
                   if(i==0){
                       e=1;
                   }
                   else {
                       for(int j=1;j<=i;j++){
                           factorial*=j;
                       }
                       e+=(1/double(factorial));
                   }
                   factorial=1;
               }
               cout<<"e es aproximadamente: "<<e<<endl;


#endif
#if CASE==7
               //    programa que recibe un numero n y halle la suma de todos los numeros pares en la serie
               //    de Fibonacci menores a n.
                   int min=1,max=1,aux,suma=0,numero;
                   cout<<"ingrese un numero: ";cin>>numero;
                   while (numero>max) {
                       aux=min+max;
                       if(aux%2==0){
                           suma+=aux;
                       }
                       min=max;
                       max=aux;
                   }
                   cout<<"el resultado de la suma es: "<<suma<<endl;

#endif
#if CASE==8
//    Escribe un programa que reciba 3 números a, b, c, y calcule la suma de todos
//    los múltiplos de a y b que sean menores a c. Ten en cuenta no sumar 2 veces
//    los múltiplos comunes.

     int a,b,c,aux,min,max = 0;

     cout<<"ingrese los numeros para la sumatoria de todos sus multiplos"<<endl;
     cout<<"numero a: ";cin>>a;
     do {
         cout<<"numero b: ";cin>>b;
     } while (b==a);

     if(a>b){
         max=a;
         min=b;
     }
     else {
         max=b;
         min=a;
     }
     do {
          cout<<"numero c, c debe ser mayor: ";cin>>c;
     } while (c<=max);

     //a sumatoria de multiplos de min
     //b sumatoria  de multiplos de max

     a=0;b=0;
     for(int i=min;i<c;i+=min){
         a+=i;
         cout<<i<<"+ ";
     }
     for(int i=max;i<c;i+=max){
         if(i%min!=0){
           b+=i;
           cout<<i<<"+ ";
         }
     }
     cout<<"= "<<(a+b)<<endl;

#endif
#if CASE==9
     //    programa que pida un número entero N e imprima el resultado de la suma
     //    de todos sus dígitos elevados a sí mismos.
         int N,suma=0;
         int modulo;
         cout<<"ingrese un numero: ";cin>>N;

         while (N>0) {
             modulo=N%10;
             suma+=potencia(modulo,modulo);
             N/=10;
         }

         cout<<"El resultado de la suma es: "<<suma<<endl;

#endif
#if CASE==10
         //    Escriba un programa que reciba un número n e imprima el enésimo número primo.
             int n,nprimo=0,primo=0;
             int residuo=0,posicion=0;
             cout<<"ingrese el n-esimo numero  primo que desea: "<<endl;cin>>n;
             while (n!=nprimo) {
                 do {
                     residuo=0;
                     posicion++;
                     for(int j=1;j<=posicion;j++){
                         if(posicion%j==0)
                             residuo++;
                     }
                 } while (residuo!=2);

                 primo=posicion;

                 nprimo++;
             }
             cout<<"el primo numero "<<n<<" :"<<primo<<endl;

#endif
#if CASE==11
             //    Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
             //    todos los números enteros entre 1 y el número ingresado.
                 int numero;
                 cout<<"ingrese el nuemro en el cual se calculara el mcm desde 1 hasta el ingresado: ";
                 cin>>numero;
                 int A,B,mcmultiplo=0;
                 B=numero;
                 A=B-1;

                 for(int i=numero;i>1;i--){
                     mcmultiplo=mcm(A,B);
                     B=mcmultiplo;
                     A--;
                 }
                 cout<<"el minimo coum multiplo es: "<<mcmultiplo<<endl;


#endif
#if CASE==12
//Escribe un programa que calcula el máximo factor primo de un número.

                 int primoMax=1;
                 int residuo=0;
                 int num;
                 cout<<"ingrese numero para calcular su maximo primo: ";
                 cin>>num;

                 for (int i=1;i<=num ;i++ ){

                     for (int j=1;j<=i ;j++ ){
                         if(i%j==0)
                             residuo++;
                     }
                     if(residuo==2)
                         primoMax=i;
                     residuo=0;
                 }

                 cout<<"el maximo factor primo de "<<num<<" :"<<primoMax<<endl;

#endif
#if CASE==13
                 //    Escriba un programa que reciba un número y calcule la suma de todos los primos
                 //    menores que el número ingresado.

                     int suma=0,numero;
                     int contador=0;

                     cout<<"ingrese un numero: ";cin>>numero;

                     for(int i=1;i<=numero;i++){//se itera hasta el numero ingresado

                         contador=0;
                         for(int j=1;j<=i;j++){//se itera hasta el numero de la primera iteracion
                             if(i%j==0)
                                 contador++;//si el modulo entre 1 hasta el numero de la primera iteracion
                                            //suma dos contadores implica un numero primo
                         }
                         if(contador==2){
                             suma+=i;//si es primo agregar a la suma
                         }

                     }

                     cout<<"el resultado de la suma es: "<<suma<<endl;

#endif
#if CASE==14
 //        escriba un programa que calcule el número palíndromo más grande que se puede obtener
 //        como una multiplicación de números de 3 dígitos.
               int multiplicacion,num1,num2,mayor=0;
               int aux,inverso=0;

               for(int i=990;i<=999;i++){

                   for(int j=100;j<=999;j++){

                       multiplicacion=i*j;
                       aux=multiplicacion;
                       while (multiplicacion>0) {
                           inverso+=multiplicacion%10;
                           inverso*=10;
                           multiplicacion/=10;
                       }
                       inverso/=10;

                       if(aux==inverso){
                           if(aux>mayor){
                               num1=i;
                               num2=j;
                               mayor=aux;
                           }
                       }
                       inverso=0;
                   }
               }

               cout<<"resultado  "<<num1<<"*"<<num2<<": "<<num1*num2<<endl;
#endif
#if CASE==15
               int n,sum=1,aux=1;

               cout<<"ingrese tamano de la matriz, dato ingresado impar: ";
               cin>>n;

               for (int i=1;i<=(n-1)/2 ;i++ ){
                   for (int k=0;k<4 ;k++ ) {
                       aux+=2*i;
                       sum+=aux;
                   }
               }

               cout<<"En una espiral de "<<n<<"x"<<n<<", la suma es: "<<sum<<endl;


#endif
#if CASE==16
   //        serie de Collatz
   //        sea n un elemento de la serie,
   //        si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.

   //        programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
   //        que k, que produce la serie más larga y diga cuantos términos m tiene la serie.

               int k,m=0,j;
               int contador=0;
               cout<<"ingrese un numero: ";cin>>k;
               k-=1;
               while (k>1) {
                   contador=collatz(k);
                   if(contador>m){
                       j=k;
                       m=contador;
                   }

                   k--;
               }
               cout<<"La serie mas larga es con la semilla: "<<j<<" teniendo "<<m<<" terminos. "<<endl;
               cout<<j<<": ";
               while (j!=1) {
                   if(j%2==0){
                       j/=2;
                       cout<<j<<", ";
                   }
                   else {
                       j=(3*j)+1;
                       cout<<j<<", ";
                   }
               }
               cout<<endl;


#endif
#if CASE==17
//La secuencia de números triangulares se forma al sumar su posición en el arreglo
//con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
// Escribe un programa que reciba un número k y
// calcula cuál es el primer número triangular que tiene más de k divisores.

      int k=0;
      int divisores;
      int numeroT=0;
      int i=0;

      cout<<"ingrese el numero de divisores, para hallar primer numero triangular que contiene: ";
      cin>>k;

      do {
          divisores=0;
          i=(numeroT*(numeroT+1))/2;

          for (int j=1;j<=i; j++) {
              if(i%j==0){
                  divisores++;
              }
          }

          numeroT++;

      } while (divisores<k);
      cout<<"el numero "<<i<<" tiene "<<divisores<<" divisores."<<endl;

#endif
    return 0;
}


void valores (int *cantidad, int denominacion, int cont){

    cont=*cantidad/denominacion;
    *cantidad=*cantidad%denominacion;
    cout<<denominacion<<": "<<cont<<endl;
};
void fecha(int mes, int dia){
    switch (mes) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:// meses que llegan hasta 31 dias
        if(dia>31 || dia<1){
            cout<<mes<<"/"<<dia<<" es una fecha invalida"<<endl;//si dia sale del rango 1-31. error en la fecha
        }
        else{
            cout<<mes<<"/"<<dia<< " es una fecha valida"<<endl;
        }
        break;
    case 4: case 6: case 9: case 11:
        if(dia>30 || dia<1){
            cout<<mes<<"/"<<dia<<" es una fecha invalida"<<endl;
        }
        else{
            cout<<mes<<"/"<<dia<< " es una fecha valida"<<endl;
        }

        break;
    case 2:
        if(dia==29 ){
            cout<<dia<<"/"<<mes<<" es valida en bisiesto"<<endl;
        }
        else if (dia>28 || dia<1) {
            cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;
        }
        else {
            cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
        }
        break;
    default:
        cout<<mes<<"/"<<dia<<": es una fecha invalida"<<endl;
    }
}
int potencia(int x, int y){
    int s=1;
    for(int i=0;i<y;i++){
        s*=x;
    }
    return s;
};
int mcm(int x,int y){
    int mcm=0;
    int a=nummax(x,y);
    int b=nummin(x,y);
    mcm=(a/mcd(a,b))*b;
    return mcm;
}
int mcd(int x,int y){
  int mcd=0;
  int a=nummax(x,y);
  int b=nummin(x,y);
  do {
      mcd=b;
      b=a%b;
      a=mcd;

  } while (b!=0);
  return mcd;
};
int nummax (int x,int y){
    int mayor=0;
    if(x<y){
        mayor=y;
    }
    else{
        mayor=x;
    }
    return mayor;
};
int nummin (int x,int y){
    int menor=0;
    if(x>y){
        menor=y;
    }
    else{
        menor=x;
    }
    return menor;
};
int collatz(int c){

    int contador=0;

    while (c!=1) {
        if(c%2==0){
            c/=2;
        }
        else {
            c=(3*c)+1;
        }
        contador++;
    }

    return contador;
};
//
