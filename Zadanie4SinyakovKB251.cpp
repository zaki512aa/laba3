#include <iostream>
#include <cmath>
using namespace std;

// функция для вычисления площади круга
double ploshad_kruga(double radius) {
    return M_PI * radius * radius;
}

// функция для вычисления площади прямоугольника
double ploshad_pryamougolnika(double dlina, double shirina) {
    return dlina * shirina;
}

// функция для вычисления площади прямоугольного треугольника
double ploshad_treugolnika(double osnovanie, double vysota) {
    return 0.5 * osnovanie * vysota;
}

// функция для вывода меню
void pokazat_menu() {
    cout << "\n=== vybor figury ===" << endl;
    cout << "1. krug" << endl;
    cout << "2. pryamougolnik" << endl;
    cout << "3. pryamougolnyj treugolnik" << endl;
    cout << "4. vyhod" << endl;
    cout << "vash vybor: ";
}

int main() {
    int vybor;
    char prodolzhit;

    do {
        pokazat_menu();
        cin >> vybor;

        switch (vybor) {
            case 1: {
                // круг
                double radius;
                cout << "vvedite radius kruga: ";
                cin >> radius;
                if (radius > 0) {
                    double ploshad = ploshad_kruga(radius);
                    cout << "ploshad kruga: " << ploshad << endl;
                } else {
                    cout << "oshibka: radius dolzhen byt polozhitelnym" << endl;
                }
                break;
            }

            case 2: {
                // прямоугольник
                double dlina, shirina;
                cout << "vvedite dlinu pryamougolnika: ";
                cin >> dlina;
                cout << "vvedite shirinu pryamougolnika: ";
                cin >> shirina;
                if (dlina > 0 && shirina > 0) {
                    double ploshad = ploshad_pryamougolnika(dlina, shirina);
                    cout << "ploshad pryamougolnika: " << ploshad << endl;
                } else {
                    cout << "oshibka: dlina i shirina dolzhny byt polozhitelnymi" << endl;
                }
                break;
            }

            case 3: {
                // прямоугольный треугольник
                double osnovanie, vysota;
                cout << "vvedite osnovanie treugolnika: ";
                cin >> osnovanie;
                cout << "vvedite vysotu treugolnika: ";
                cin >> vysota;
                if (osnovanie > 0 && vysota > 0) {
                    double ploshad = ploshad_treugolnika(osnovanie, vysota);
                    cout << "ploshad pryamougolnogo treugolnika: " << ploshad << endl;
                } else {
                    cout << "oshibka: osnovanie i vysota dolzhny byt polozhitelnymi" << endl;
                }
                break;
            }

            case 4:
                cout << "do svidaniya" << endl;
                return 0;

            default:
                cout << "nekorrektnyj vybor poprobuyte snova" << endl;
                break;
        }

        cout << "\nhotite prodolzhit (y/n): ";
        cin >> prodolzhit;

    } while (prodolzhit == 'y' || prodolzhit == 'Y');

    cout << "do svidaniya" << endl;
    return 0;
}