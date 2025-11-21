#include <iostream>
#include "SVC_Chiffrement.h"

using namespace std;
using namespace NS_SVC;

int main()
{
	SVC_Chiffrement service;
	int mode;
	char action;
	string texte;

	cout << "Texte à traiter : ";
	getline(cin, texte);

	cout << "Mode de sécurité (1 = César, 2 = XOR, 3 = Mixte) : ";
	cin >> mode;

	cout << "Souhaitez-vous chiffrer (C) ou déchiffrer (D) ? ";
	cin >> action;

	bool chiffrement = (action == 'C' || action == 'c');

	service.chiffrer_ou_dechiffrer(mode, chiffrement, texte);

	cout << "Fin du programme." << endl;
}
