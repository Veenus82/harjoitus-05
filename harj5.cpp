/******
*ohjelman nimi: harjoitus 5
*tekij� Markus Malm
*Lyhyt kuvaus:
Kirjoita ohjelma, joka pyytää käyttäjältä kaksi kokonaislukua.
Ohjelma tulostaa tekstin BINGO, mikäli luvut ovat samoja.
Muussa tapauksessa ohjelma tulostaa tekstin BONGO
*versio 1.0
*pvm: 10.9.2014
*/
#include <iostream>
#include <string>
using namespace std;
const string väärin = "BONGO";
const string oikein = "BINGO";
void main(void)
{
	int luku1;
	int luku2;
	cout << "Syötä luku 1";
	cin >> luku1;
	cout << "Syötä luku 2";
	cin >> luku2;

	if (luku1 != luku2)
		cout << väärin;
	else 
		cout << oikein;
}