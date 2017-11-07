#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1,str2;
    str1="abcdefghijklmnopqrstuvwxyz";  //Creamos dos listas con los caraceteres que se reconoceran
    str2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string frase;
    string fraseFin;   //Creamos un string que guardara  frase final
    cout<< "Ingrese caracteres: " << endl;
    cin>>frase;

    for(int i=0;i<frase.length();i++){
        for(int j=0;j<str1.length();j++){  //Creamos dos for uno que detecte letra a letra lo que ingreso el usuario
                                           //y otro comparando con lo que esta permitido
                if(frase[i]==str1[j]){
                fraseFin+=frase[i];
                }
                if(frase[i]==str2[j]){
                fraseFin+=" ";   //Creamos un espacio para separar las palabras en caso encuentre una mayuscula
                fraseFin+=frase[i];
                }
        }
    }
    cout<<"La frase retocada es: "<<endl;
    cout<<fraseFin<<endl; //Imprimimos la frase terminada y retornamos 0 para verificar que todo este correcto

    return 0;
}
