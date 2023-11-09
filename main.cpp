#include<iostream>
#include<cmath>
using namespace std;

int main() {
    string r3, r4, r5, re1, re2, rep;
    int puntaje;
                    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
                    cout << "Bienvenido a quien quiere ser millonario" << endl;
                    cout << " " << endl;
                    cout << "Reglas" << endl;
                    cout << "1. Si contesta de manera correcta ira sumando dinero" << endl;
                    cout << "2. Si contesta de manera erronea pierde todo el dinero acumulado" << endl;
                    cout << "3. En caso de error el programa se cerrara automaticamente" << endl;
                    cout << " " << endl;
                    cout << "Mucha suerte o/" << endl;
                    cout << " " << endl;
                    cout << "Seleccione la respuesta correcta" << endl;
                    cout << "Pregunta 1" << endl;
                    cout << "¿En que lugar de la tierra, la troposfera se extiende hasta los 18 Km?" << endl;
                    cout << "a. Polos" << endl;
                    cout << "b. Ecuador" << endl;
                    cout << "c. Colombia" << endl;
                    cout << "d. Guinea Ecuatorial" << endl;
                    cin >> re1;
                    while (re1 != "a" && re1 != "b" && re1 != "c" && re1 != "d" && re1 != "A" && re1 != "B" && re1 != "C" && re1 != "D") {
                        cout << "Elija una opción válida, solo pueden ser las letras a, b, c, d" << endl;
                        cin >> re1;
                    }
                    if (re1 == "b" || re1 == "B") {
                        cout << "Feliciades su respuesta es correcta, usted ha sumado $100" << endl;
                        puntaje += 100;
                        cout << " " << endl;
                        cout << "Pregunta 2" << endl;
                        cout << "¿Ejemplo de un contaminante primario?" << endl;
                        cout << "a. Nitratos" << endl;
                        cout << "b. Dioxido de Carbono" << endl;
                        cout << "c. Monoxido de Carbono" << endl;
                        cout << "d. Sulfatos" << endl;
                        cin >> re2;
                        while (re2 != "a" && re2 != "b" && re2 != "c" && re2 != "d" && re2 != "A" && re2 != "B" && re2 != "C" && re2 != "D") {
                            cout << "Elija una opción válida, solo pueden ser las letras a, b, c, d" << endl;
                            cin >> re2;
                        }
                        if (re2 == "c" || re2 == "C") {
                            cout << "Feliciades su respuesta es correcta, usted ha sumado $500" << endl;
                            puntaje += 500;
                            cout << " " << endl;
                            cout << "Pregunta 3" << endl;
                            cout << "¿Porcentaje que constituye el Nitrogeno en la atmosfera?" << endl;
                            cout << "a. 78%" << endl;
                            cout << "b. 21%" << endl;
                            cout << "c. 50%" << endl;
                            cout << "d. 1%" << endl;
                            cin >> r3;
                            while (r3 != "a" && r3 != "b" && r3 != "c" && r3 != "d" && r3 != "A" && r3 != "B" && r3 != "C" && r3 != "D") {
                                cout << "Elija una opción válida, solo pueden ser las letras a, b, c, d" << endl;
                                cin >> r3;
                            }
                            if (r3 == "a" || r3 == "A") {
                                cout << "Feliciades su respuesta es correcta, usted ha sumado $1000" << endl;
                                puntaje += 1000;
                                cout << " " << endl;
                                cout << "Pregunta 4" << endl;
                                cout << "¿Indique la propiedad fisica del suelo?" << endl;
                                cout << "a. Humedad" << endl;
                                cout << "b. Conductividad electrica" << endl;
                                cout << "c. Ph" << endl;
                                cout << "d. Estructura" << endl;
                                cin >> r4;
                                while (r4 != "a" && r4 != "b" && r4 != "c" && r4 != "d" && r4 != "A" && r4 != "B" && r4 != "C" && r4 != "D") {
                                    cout << "Elija una opción válida, solo pueden ser las letras a, b, c, d" << endl;
                                    cin >> r4;
                                }
                                if (r4 == "d" || r4 == "D") {
                                    cout << "Feliciades su respuesta es correcta, usted ha sumado $5000" << endl;
                                    puntaje += 5000;
                                    cout << " " << endl;
                                    cout << "Pregunta 5" << endl;
                                    cout << "¿Seleccione una fuente natural de contaminacion del suelo?" << endl;
                                    cout << "a. Erupciones volcanicas" << endl;
                                    cout << "b. Mineria" << endl;
                                    cout << "c. Aguas residuales" << endl;
                                    cout << "d. Actividades industriale" << endl;
                                    cin >> r5;
                                    while (r5 != "a" && r5 != "b" && r5 != "c" && r5 != "d" && r5 != "A" && r5 != "B" && r5 != "C" && r5 != "D") {
                                        cout << "Elija una opción válida, solo pueden ser las letras a, b, c, d" << endl;
                                        cin >> r5;
                                    }
                                    if (r5 == "a" || r5 == "A") {
                                        cout << "Feliciades su respuesta es correcta, usted ha sumado $10000" << endl;
                                        puntaje += 10000;
                                        cout << " " << endl;
                                        cout << "Felicidades, usted ha contestado todas las preguntas" << endl;
                                        cout << "Ha ganado: $" << puntaje << endl;
                                        cout << "¿Desea volver a jugar? (El premio solo es válido por 1 intento)" << endl;
                                        cout << "Elija Si/No" << endl;
                                        cin >> rep;

                                        while (rep != "Si" && rep != "SI" && rep != "si" && rep != "No" && rep != "NO" && rep != "no") {
                                            cout << "Opción inválida, por favor, elija Si o No" << endl;
                                            cin >> rep;
                                        }
                                    } else {
                                        cout << "Usted ha perdido, gracias por participar" << endl;
                                    }
                                } else {
                                    cout << "Usted ha perdido, gracias por participar" << endl;
                                }
                            } else {
                                cout << "Usted ha perdido, gracias por participar" << endl;
                            }
                        } else {
                            cout << "Usted ha perdido, gracias por participar" << endl;
                        }
                    } else {
                        cout << "Usted ha perdido, gracias por participar" << endl;
                    }
}
