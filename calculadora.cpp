#include <iostream>
using namespace std;

	class Calculadora {
    double primero;
    double segundo;
    bool comprobar() const {
        return segundo != 0.0;
    }
	
    public:
    Calculadora(): primero(0.0), segundo(0.0) {}

    void setNumeros(double a, double b) {
        primero= a;
        segundo= b;
    }
     
    double getPrimero() const {
        return primero;
    }
    double getSegundo() const {
        return segundo;
    }
    double sumar() const {
        return primero + segundo;
    }
    double restar() const {
        return primero - segundo; 
    } 
    double restar_correcto() const { 
        return primero - segundo; 
    }
    double multiplicar() const {
        return primero * segundo;
    }
	
    bool dividir(double& resultado) const {
        if (comprobar()) {
            resultado=primero/segundo;
            return true;
        }
        return false;
    }
};

    
int main (){
	Calculadora casio;
	int opcion;
	double n1,n2,res;
	do{
	cout<<endl;
	cout<<"+---------------------+"<<endl;
	cout<<"| CALCULADORA - CASIO |"<<endl;
	cout<<"+---------------------+"<<endl;
	cout<<"1) Comprobar: "<<endl;
	cout<<"2) Sumar: "<<endl;
	cout<<"3) Restar: "<<endl;
	cout<<"4) Multiplicar:"<<endl;
	cout<<"5) Dividir:"<<endl;
	cout<<"6) Consultas:"<<endl;
	cout<<"Escoga una opcion"<<endl;
	cin>>opcion;
		switch(opcion){
			case 1:
				cout<<"\nIngresa el primer numero: "<<endl;
				cin>>n1;
				cout<<"\nIngresa el segundo numero:  "<<endl;
				cin>>n2;
				casio.setNumeros(n1, n2);
				break;
				
            case 2:
                cout <<"Resultado de la suma: "<< casio.sumar()<< "\n\n";
                
                break;

            case 3:
                cout <<"Resultado de la resta: "<< casio.getPrimero() - casio.getSegundo() << "\n\n";
                break;

            case 4:
                cout <<"Resultado de la multiplicacion: "<< casio.multiplicar()<< "\n\n";
                break;

            case 5:
                if (casio.dividir(res)) {
                    cout <<"Resultado de la division: "<<res<<"\n\n";
                } else {
                    cout <<"Error: Division por cero no permitida.\n\n";
                }
                break;

            case 6:
            	cout << "Primer numero: " << casio.getPrimero() << "\n\n";
                cout << "Segundo numero: " << casio.getSegundo() << "\n\n";
                break;

            case 7:
                cout << "Saliendo...\n\n";
                break;

            default:
                cout << "No es una opcion valida\nIntentalo otra vez\n\n";
        }
    } while (opcion != 7);

    return 0;
}


