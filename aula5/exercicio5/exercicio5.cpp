#include <iostream>

using namespace std;

int main (){ 
 double horasDia;
 double semanaMes= 4.5;

cout <<"Informe a quantdade de horas de treino por dia: ";
cin >> horasDia;

double horasSemana= horasDia*5;

cout << "Voce fez o treinamento por " << horasSemana << " horas na semana." << endl;

double totalSemanas = 1000 / horasSemana;

int meses = static_cast<int>(totalSemanas / semanaMes);
double semanasRestantes = totalSemanas - (meses * semanaMes);
int semanas = static_cast<int>(semanasRestantes);
int dias = static_cast<int>((semanasRestantes - semanas) * horasSemana);

cout << "Para completar 1000 horas de treino, treinando " << horasDia << " horas por dia, voce precisa treinar por " << meses << " meses, "
 << semanas << " semanas e " 
 << dias << " dias." << endl;

}