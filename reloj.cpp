#include <iostream>
using namespace std;

class Reloj {
private:
    int horas, minutos, segundos;
    int bateria;

public:
    Reloj(int h, int m, int s, int b);

    bool ajustarHora(int h, int m, int s);

    int getHoras();
    int getMinutos();
    int getSegundos();
    int getBateria();

    void tic_tac();
    void avanza(int h, int m, int s);
    void atrasa(int h, int m, int s);

    bool estaParado();
    void recargaBateria(int b);

    void horaFormato12h();
    void horaFormato24h();
};

int main (){

	return 0;
}
