#include <iostream>
#include <math.h>
using namespace std;
// por ahora crearemo la clase aqui mismo
class Punto{
    public:
        int x,y;
};
class Vector {
    public:
        Punto inicio,fin;
};

void imprimirVec(const Vector &v)// const garantiza que el vector no va a modificar
{
    cout << "("<< v.inicio.x<<", " << v.inicio.y<<") -> (" <<v.fin.x<<", "<<v.fin.y<<") ";
}
//int pot( Vector ,int a){
//}
int  modulVect( Vector v){//primera forma
    int x=sqrt((v.inicio.x-v.fin.x)*(v.inicio.x-v.fin.x)+(v.inicio.y-v.fin.y)*(v.inicio.y-v.fin.y));
    return x;
}

float modulVect1(const Vector &v){// 2da forma
    int x_= (v.inicio.x-v.fin.x);
    int y_ = (v.inicio.y-v.fin.y);
    return sqrt(x_*x_+y_*y_);
}
//-----------------------------<<<<<<<<<<*>>>>>>>>>>>>>---------------------------------------

// con punteros
float modulVect1P(const Vector *v){// 2da forma
    int x_= ((*v).inicio.x-(*v).fin.x);
    int y_ = ((*v).inicio.y-(*v).fin.y);
    return sqrt(x_*x_+y_*y_);
}

void imprimirVecP(const Vector *v)// const garantiza que el vector no va a modificar
{
    cout << "("<< (*v).inicio.x<<", " << (*v).inicio.y<<") -> (" <<(*v).fin.x<<", "<<(*v).fin.y<<") ";
}

void imprimirVecP1(const Vector *v)// usando el operador ->
{
    cout << "("<< v->inicio.x<<", " << v->inicio.y<<") -> (" <<v->fin.x<<", "<<v->fin.y<<") ";
}
//void ()

int main()
{
    Vector v;
    v.inicio.x = 1;
    v.inicio.y = 2;
    v.fin.x = 3;
    v.fin.y = 4;
    imprimirVec( v);
    cout <<endl;
    cout <<" El modulo del vectores(int): "<<modulVect(v)<<endl;
    cout <<" El modulo del vectores(float): "<<modulVect1(v)<<endl;
    //-------------------------------------------------------------------

    Vector vects[4];
    vects[0];
    vects[0].inicio.x=1;
    vects[0].inicio.y=2;
    vects[0].fin.x=3;
    vects[0].fin.y=4;
    vects[1];
    vects[1].inicio.x= 6;
    vects[1].inicio.y= 5;
    vects[1].fin.x= 2;
    vects[1].fin.y= 2;
    vects[2];
    vects[2].inicio.x= 4;
    vects[2].inicio.y= 3;
    vects[2].fin.x= 4;
    vects[2].fin.y= 1;
    vects[3];
    vects[3].inicio.x= 4;
    vects[3].inicio.y=7 ;
    vects[3].fin.x= 1;
    vects[3].fin.y= 1;
    for(int i=0;i<4;i++){
      cout <<"el modulo del vects["<<i<<"] :"<< modulVect1(vects[i])<<" \n";
    }

    cout << endl;
    //--------------------------------------------------------------------
    // operardor -> E SSIMILAR QUE (*v) SOLO PARA PUNTEROS
    //PUNTEROS
    Vector *ptr=&v;
    imprimirVecP(ptr);// es lo msmo que  imprimirVectP(&v)
    imprimirVecP1( ptr);
    modulVect1P(ptr) ;
    return 0;
}
