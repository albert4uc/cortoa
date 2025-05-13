#include <iostream>
using namespace std;

int main() {
//declarion de variables
int edad,genero,compra,dinero = 200;
cout<<"bienvenido a la tienda nike fake"<<endl;
cout<<"porfavor digite su edad"<<endl;
cin>>edad;

//verificacion segun edad
if (edad <= 12)
{
cout<<"su talla de zapato es 34";
}
else if  (edad <= 17 )
{
cout<<"su talla de zapato es 38";
}
else if (edad <= 64)
{
cout<<"su talla de zapato es 40";
}

else
{
cout<<"su talla de zapato es de 42";
}
//verificacion segun genero
cout<<""<<endl<<"digite el numero que correspende a su genero"<<endl<<"""1. Hombre"<<endl<<"2. Mujer"<<endl<<"3. mostrar todo"<<endl;
cin>>genero;
//menu de ofertas disponibles
if (genero == 1)
{
cout<<"los zapatos disponibles son"<<endl;
cout<<"1. Zapatos deportivos - $80 - descuento -20% - pago final $64"<<endl;
cout<<"2. Zapatos Formal - $120 - -20% - precio final $96"<<endl;
cout<<"3. Zapatos Premiun - $250 - -20% - precio final $200"<<endl;
cout<<"seleccione el numero correspendiente para efectuar su compra"<<endl;
cin>>compra;
//seleccion de opcion para 
switch (compra)
{
case 1:
cout<<"Gracias por adquirir sus Deportivos al mejor precio"<<endl<<"su dinero disponible es de $"<<dinero - 64 ;
break;

case 2 :
 
cout<<"Gracias por adquirir su calzado Formal al mejor precio"<<endl<<"su dinero disponible es de $"<<dinero - 96 ;
break;

case 3:
cout<<"Gracias por adquirir sus zapatos Premiun al mejor precio"<<endl<<"su dinero disponible es de $"<<dinero - 200 ;


default:
    break;
}
}

if (genero == 2)
{
cout<<"los zapatos disponibles son"<<endl;
cout<<"1. Zapatos Casuales - $70 - descuento -15% - su descuento es de $"<<70 * 0.15<<" ""precio final $"<< 70 - 10.50<<endl;
cout<<"2. Zapatos Elegante - $100 - descuento -15% - su descuento es de $"<<100 * 0.15<<" ""precio final $"<< 100 - 15 <<endl;
cout<<"3. Zapatos Premiun - $250 - descuento -15% - su descuento es de $"<<250 * 0.15<<" ""precio final $"<< 250 - 37.50<<endl;

cout<<"seleccione el numero correspendiente para efectuar su compra"<<endl;
cin>>compra;
//seleccion de opcion para 
switch (compra)
{
case 1:
cout<<"Gracias por adquirir sus Deportivos al mejor precio"<<endl<<"su dinero disponible es de $"<<dinero - 59.50  ;
break;

case 2 :
 
cout<<"Gracias por adquirir su calzado Formal al mejor precio"<<endl<<"su dinero disponible es de $"<<dinero - 85 ;
break;

case 3:
cout<<"su saldo es insuficiente para realizar su compra"<<endl<<"su saldo es de $"<<dinero<<""<<endl<<" necesita $"<<212.50 - 200<<"vuelva pronto" ;
default:
    break;
}
}














return 0;
}


