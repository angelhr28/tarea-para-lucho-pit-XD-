/////////////////////////////////// HUAMANÑAHUI ROBLES NEWTON ANGEL ////////////////////////////////////

#include <iostream>
using namespace std; 

int main() {
  int p,s = 0 ,d = 0;
  string vect[100];
  int cantidad = 0;
  bool cambio=false ,encontrar= true, a=true;	
  int elemento=0;
  string buscar;
  int  antes = 0;
  string remplazo, nuevo; 
  int menu = 1;

  cout<<"TAREA DE LA EMPRESA "<<endl;
  //for(int s=0;s<=4;s++){
  while(menu != 0) {
  	system("pause");// PAUSAR LA OPERACION XD   
    system("cls");// LIMPIADO DE PANTALLA XD 
	cout<<"\n1.INGRESO DE LOS EMPLEADOS"<<endl;
    cout<<"\n2.MUESTRA DE LOS EMPLEADOS"<<endl;	
    cout<<"\n3.BUSQUEDA DE UN NUMERO "<<endl; 
    cout<<"\n4.MODIFICAR UN EMPLEADO  ."<<endl;
    cout<<"\n5.ELIMINACION DE UN EMPLEADO "<<endl;
    cout<<"\n6.SALIR"<<endl<<endl;
    cin>>d;
    switch(d){
      case 1: 
         /////////////////////////////// INGRESO DE DATOS///////////////////////////////////////
		  cout<<"1. INGRESO DE NOMBRES "<<endl<<endl;
          cout<<"introdusca el numero de vectores"<<endl;
          cin>>cantidad;

          for(int i=0;i<cantidad;i++){
	          cout<<"INTRODUSCA LOS NOMBRES"<<endl;
	          cin>>vect[i];
          }
          break;
	    
		         /////////////////////////////// MUESTRA  DE DATOS///////////////////////////////////////

		case 2:
        cout<<"\n1.MUESTRA DE LOS NOMBRES "<<endl<<endl;
	
	      for(int i=0;i<cantidad ; i++){
	        cout<<"vect["<<i+1<<"] : "<<vect[i]<<endl;
        }
        break;
      
	           /////////////////////////////// BUSQUEDA DE DATOS///////////////////////////////////////

	  
	  case 3:
        cout<<"\nB.BUSQUEDA DE UN TRABAJADOR "<<endl<<endl; 
        cout<<"NOMBRE DEL TRABAJADOR"<<endl;
        cin>>buscar;
        for(int i=0;i<cantidad;i++){
	        if(buscar==vect[i]){
            cout<<"EL TRABAJADOR  "<<vect[i]<<" ESTA DENTRO DE LA EMPRESA  [ "<<i+1<<" ]";
	        }
          else {
            a = false;
          }
        }
        if(a){
	        cout<<"EL TRABAJADOR NO EXISTE "<<endl;	
        } 
          
        break;
      
	           /////////////////////////////// MODIFICACION DE DATOS///////////////////////////////////////

	  
	  case 4:
        cout<<"\nC.MODIFICAR UN NOMBRE ."<<endl<<endl;
        cout<<"INDIQUE LA POSICION A MODIFICAR"<<endl;
        cin>>antes;
        cout<<"INDIQUE EL NOMBRE NUEVO"<<endl;
        cin>>remplazo;
        for(int i=0;i<cantidad;i++){
 	        if(antes==i+1){
 		        vect[i]= remplazo; 		
	        }
        }
 	   
        break;
      
	           /////////////////////////////// ELIMINACION DE DATOS///////////////////////////////////////

	  
	  case 5:
        cout<<"\nA.ELIMINACION DE UN TRABAJADOR"<<endl<<endl;
        cout<<"INDIQUE LA POCISION A ELIMINAR"<<endl;
        cin>>elemento;
        for(int i=elemento;i<cantidad;i++){
	        vect[i] = vect[i+1];
	      }
        vect[cantidad] = p; 
        break;
      
	           /////////////////////////////// FIN DE TAREAS ///////////////////////////////////////

	  
	  case 6:
        menu = 0;
        break;
      default:
        cout<< "LA OPCION ES INVALIDA VUELVA A INTENTARLO. "<<endl;
        break;
    }
  }
  return 0;
  
}
