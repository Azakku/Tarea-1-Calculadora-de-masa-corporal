#include <iostream>

using namespace std;

int main()
{
    //Declarar Variente
    double BMI;
    int PesoKilo;
    double AlturaMetro;
    string nombre;
    string BMIRESULTADO;

    //Entradas
    cout << "Bienvenido a su calculadora de índice de masa corporal"<<endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "\nIngrese su nombre para comenzar: ";
    cin >> nombre;
    cout << "\nPorfavor ingrese su peso en kilogramos: ";
    cin >> PesoKilo;
    cout << "\nPorfavor ingrese Altura en metro: ";
    cin >> AlturaMetro;

    //Proceso
    BMI = PesoKilo/(AlturaMetro*AlturaMetro);

    //Salida
    cout << "\nUsuario " <<nombre<< ", su masa corporal es: " <<BMI<<endl;
    if (BMI<=18.5)
    {
        cout << "Usted tiene bajo peso, porfavor comuniquese con un experto para mas informacion.";
    }
    else
    if (BMI>18.5&&BMI<=24.9)
    {
        cout << "Felicidades, su peso es normal.";
    }
    else
    if (BMI>25&&BMI<=29.9)
    {
        cout << "Usted actualmente tiene sobrepeso, porfavor comuniquese con un experto para mas informacion.";
    }
    else
        if (BMI>=30)
    {
        cout << "Usted actualmente tiene obesidad, porfavor comuniquese con un experto para mas informacion."<<endl;
    }
    cout << "\n\nGracias por usar la calculadora";
    cout << "\n\n";
    return 0;
}
