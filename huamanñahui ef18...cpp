////////////// mostra un menu : ingresar mostrar buscar modificar y eliminar
#include <iostream>
using namespace std; 

int main() {
  int j=0,s = 0 ,d = 0;
 
 
 string nom[20], apep[20],apem[20];
int cod[20];
int elemento=0;
 string buscar;
  string  antes,p,y,h ;
  string remplazo, despues; 
  int menu = 1;

  cout<<"LISTA DE ASISTENCIA  "<<endl;
  while(menu != 0) {
  	system("pause");// PAUSAR LA OPERACION XD   
    system("cls");// LIMPIADO DE PANTALLA XD 
	cout<<"\n1.INGRESO DE LOS ALUMNOS"<<endl;
    cout<<"\n2.MUESTRA DE LOS ALUMNOS"<<endl;	
    cout<<"\n3.BUSQUEDA DE UN NUMERO "<<endl; 
    cout<<"\n4.MODIFICAR UN ALUMNOS  ."<<endl;
    cout<<"\n5.ELIMINACION DE UN ALUMNOS "<<endl;
    cout<<"\n6.SALIR"<<endl<<endl;
    cin>>d;
    switch(d){
    case 1:cout<<"1. INGRESO DE NOMBRES "<<endl<<endl;
        
          for(int i=0;i<20;i++){
	          cout<<"INTRODUSCA EL NOMBRE :"<<endl;
	          cin>>nom[i];
          }
            for(int i=0;i<20;i++){
	          cout<<"INTRODUSCA LOS apellidos paterno : "<<endl;
	          cin>>apep[i];
	          
          }
          for(int i=0;i<20;i++){
	          cout<<"INTRODUSCA LOS apellidos materno : "<<endl;
	          cin>>apem[i];}
	          
	          
         for(int i=0;i<20;i++){
	          cout<<"INTRODUSCA LOS codigos:  "<<endl;
	          cin>>cod[i];
          }
          break;
          
          
      case 2:  cout<<"\n2.MUESTRA DE LOS ALUMNOS"<<endl;	
      for(int i=0;i<20;i++){
      	
      	cout<<nom[i]<<" "<<apep[i]<<" "<<apem[i]<<"			"<<cod[i]<<endl<<endl;
	  }
	  break;
	  
	  case 3:   cout<<"\n3.BUSQUEDA DE UN ALUMNO "<<endl;
	  
	  cout<<"Diga el nombre del alumno:"<<endl;
	  cin>>buscar;
	  
	  for(int i=0;i<20;i++){
	  	if(buscar==nom[i]){
	  		cout<<"el alumno "<<nom[i]<<"	si esta presente."<<endl;
	  	
		  }
		  
	  	else{
	  		s;
		  }
		  if(s){
		  	cout<<"el alumno "<<buscar<<"	no esta presente.";
		  }
	  }
	  
	  break;
	  
	  case 4: cout<<"\n4.MODIFICAR UN ALUMNOS  ."<<endl;
	  
	  cout<<"Diga el nombre del alumno que desee modificar:  "<<endl;
	  cin>>antes;
	  cout<<"diga el nuevo nombre del alumno:  "<<endl;
	  cin>>despues;
	  for(int i=0;i<20;i++){
	  	if(antes==nom[i]){
	  		nom[i]=despues;
	  		
		  }
	  	if(antes==apep[i]){
	  		apep[i]=despues;
	  		
		  }
	  		if(antes==apem[i]){
	  		apem[i]=despues;
	  		
		  }
	  	
	  }
	  break;
	  case 5:  cout<<"\n5.ELIMINACION DE UN ALUMNOS "<<endl;
	 cout<<"diga el nombre del alumno para eliminar:  "<<endl;
	 cin>>antes;
	 for(int i=0;i<20;i++){
	 	if(antes==nom[i]){
	  		
	  		nom[i]=p;
	  		apep[i]=h;
	  		apem[i]=y;
	  		cod[i]=j;
	  		
		  }
	 	
	  	
	  	
	  }
	  break;
	  case 6:
	  	menu=0; break;
      }
      
  }}
