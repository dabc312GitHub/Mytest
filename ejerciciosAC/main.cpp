#include <iostream>
#include <string>

using namespace std;

/*operaciones logicas and(y) or(o) xor(xo)*/
char y(char a,char b){
    if (a=='1' && b=='1'){
        return '1';
    }
    return '0';
}
char o(char a,char b){
    if (a=='0' && b=='0'){
        return '0';
    }
    return '1';
}
char xo(char a,char b){
    if (a==b){
        return '0';
    }
    return '1';
}
string operacion(string op,bool var[],char letras[],int n,bool imp=true){
    /*Primero simplificaremos las operaciones dentro de los parentesis de haberlas*/
    int inicio=-1;
    int fin;
    int i=0;
    string aux="";
    while(i<op.length()){
        if (op[i]=='('){
            inicio=i;
            i=op.length();
        }
        i++;
    }
    if (inicio>=0){
        int cont=1;
        i=inicio;
        while(cont!=0){
            i++;
            if (op[i]=='('){
                cont++;
            }else if (op[i]==')'){
                cont--;
            }
        }
        fin =i;
        for(int j=inicio+1;j<fin;j++){
            aux+=op[j];
        }
        aux=operacion(aux,var,letras,n,false);//se realiza la operacion con todo lo encerrado en parentesis
        for(int j=inicio-1;j>=0;j--){//se restablece la estructura de la operacion con el cambio de lo encerrado en parentesis
            aux=op[j]+aux;
        }
        for(int j=fin+1;j<op.length();j++){
            aux+=op[j];
        }
        op=aux;
        if(imp){
            cout <<" --> "<< op<<" ";
        }
        op=operacion(op,var,letras,n,imp);// se vuelve a llamar la funcion por si existe un segundo parentesis
    }
    aux="";
    /*Se cambia las variables con su valor en la permutacion actual y se elimina los signos de negacion afectando al valor continuo*/
    for(int j=0;j<op.length();j++){
        if(op[j]>64 && op[j]<91){
            i=0;
            while(i<n){
                if(op[j]==letras[i]){
                    if(var[i]){
                        if(j>0 && op[j-1]=='~'){
                            op[j]='0';
                        }else{
                            op[j]='1';
                        }
                    }
                    else{
                        if(j>0 && op[j-1]=='~'){
                            op[j]='1';
                        }else{
                            op[j]='0';
                        }
                    }
                }
                i++;
            }
        }
        if(op[j]!='~'){
            aux+=op[j];
        }
    }
    op=aux;
    /*con la operacion con valores binarios se procedera a realizar las operaciones*/
    while(op.length() >1){
        if(imp){
            cout <<" --> "<< op<<" ";
        }
        if(op[1]=='&'){
            aux=y(op[0],op[2]);
        }else if(op[1]=='|'){
            aux=o(op[0],op[2]);
        }else if(op[1]=='^'){
            aux=xo(op[0],op[2]);
        }
        for(int j=3;j<op.length();j++){
            aux+=op[j];
        }
        op=aux;
    }
    return op;
}
/*Se hallan todas las posibles permutaciones y se imprimen en forma de una tabla, despues se realiza las operaciones para hallar
el resultado final*/
void permutacion(int c,bool var[],char letras[],string op,int n=0){
    if (n==0){
        n=c;
    }
    if (c>0){
        var[n-c]=false;
        permutacion(c-1,var,letras,op,n);
        var[n-c]=true;
        permutacion(c-1,var,letras,op,n);
    }else{
        for (int i=0; i <n;i++){
            cout << var[i]<<" ";
        }
        cout<<" --> "<<operacion(op,var,letras,n)<<"\n";
    }
}

int main()
{
    string inp;  // string para almacenar la entrada
    char aux[22]; // array para almacenar las variables ingresadas A-Z
    bool error=false;//bool para error en entrada y para saber si hay un parentesis abierto o cerrado
    int i=0, cont =0,par=0;
    do{
        for(int iaux=0;iaux<22;iaux++){
            aux[iaux]='&';
        }
        par=0;
        error=false;
        i=0;
        cont=0;
        cout<< "ingresa la operacion logica a ser realizada\n";
        cin >> inp;
        while(i<inp.length()){
            if (inp[i]=='('){

                if(inp[i+1]=='&'|| inp[i+1]=='|'|| inp[i+1]=='^'||(i>0 && (inp[i-1]>64 && inp[i-1]<91)||inp[i-1]==')')){
                    error=true;
                }
                par++;

            }else if (inp[i]==')'){
                if(par>0){
                    if((inp[i+1]>64 && inp[i+1]<91) || inp[i+1]=='('|| inp[i-1]=='&'|| inp[i-1]=='|'|| inp[i-1]=='^' || inp[i-1]=='~'){
                        error=true;
                        //cout<<")";
                    }
                }else{
                    error=true;
                }
                par--;
            }else if (inp[i]=='~'){
                if(inp[i+1]=='&'|| inp[i+1]=='|'|| inp[i+1]=='^' ||(i>0 && ((inp[i-1]>64 && inp[i-1]<91)||inp[i-1]==')'))){
                    error=true;
                }
            }else if (inp[i]=='&' ||inp[i]=='|' ||inp[i]=='^'){
                if(inp[i+1]=='&'|| inp[i+1]=='|'|| inp[i+1]=='^'||inp[i+1]==')'||i==0 || i== inp.length()-1||inp[i-1]=='~'|| inp[i-1]=='('){
                    error=true;
                }
            }else if (inp[i]>64 && inp[i]<91){
                /*en el caso de las variables se ccontabilizara cuantos diferentes existen para poder crear un arreglo con estos
                y conocer cuantas posibles permutaciones existen las cuales serian 2^n*/
                if((inp[i+1]>64 && inp[i+1]<91)|| inp[i+1]=='~'|| inp[i+1]=='('|| (i>0 &&(inp[i-1]==')'))){
                    error=true;
                }
                bool repetido=false;
                for(int j=0; j<10;j++){
                    if (inp[i]==aux[j]){
                        repetido=true;
                    }
                }
                if (repetido==false){
                    aux[cont]=inp[i];
                    cont++;
                }
            }else{
                error=true;
            }
            if (error){
                i=200;
            }
            i++;
        }
        if (par>0){
            error=true;
        }
    }while(error);
    /*una vez comprobado que la entrada es correcta se procede a imprimir la tabla y realizar las operaciones*/
    cout<<"-------------------------\n";
    for (i=0;i<cont;i++){
        cout<<aux[i]<<" ";
    }
    cout << "\t"<< inp <<"\n";
    bool var[cont];
    permutacion(cont,var,aux,inp);
return 0;
}
