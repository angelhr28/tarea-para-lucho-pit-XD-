#include <iostream>
using namespace std;

void mostrar(int vec[],int a);
void buscar(int vec[],int a);
void modificar(int vec[],int a);
void eliminar(int vec[],int a);

int main() {
    const int a=5;
    int b;
    int menu=1;
    int vec[a];

    for(int i=0;i<a;i++){
        cout<<"introducir los numeros ";
        cin>>vec[i];
    }

    while(menu!=0){
        cout<<"introdusca la opcion: 	"<<endl;
        cin>>b;

        switch(b){
            case 1:buscar(vec,a);break;
            case 2:modificar(vec,a);break;
            case 3:eliminar (vec,a);break;
            case 4 :mostrar(vec,a);break;
        }

    }

}

/////////////////// buscar /////////
void buscar(int vec[],int a){
    int num;
    
    cout<<"introdusca el numero a buscar";
    cin>>num;
    
    for(int i=0;i<a;i++){
        if(vec[i]==num){
            cout<<"el numero"<<	vec[i]	<<"esta dentro del vector"<<i<<endl;	
        }
    }
    
    system("pause");	
}

/////////////////// modificar  /////////
void modificar(int vec[],int a){
    
    int antes,despues;
    
    cout<<"introdusca el numero a anterior :	 	"<<endl;
    cin>>antes;
    cout<<"introdusca el nuevo numero :		"<<endl;
    cin>>despues;

    for(int i=0;i<a;i++){
        if(antes == vec[i]){        
            vec[i] == despues;
        }
    }	
        
}

/////////////////elimina//////////////////
void eliminar(int vec[],int a){
    int elemento=0;
    int p=0;

    cout<<"INDIQUE LA POCISION A ELIMINAR"<<endl;
    cin>>elemento;
    for(int i=elemento;i<a;i++){
        vec[i] = vec[i+1];
    }
    
    vec[a] = p; 
}

///////////////////mostrar/////////
void mostrar(int vec[],int a){

    for(int i=0; i<a;i++){
        cout<<"los datos del vect["<<i<<"] :	" <<i+1<<endl;
    }
    system("pause");	
}
