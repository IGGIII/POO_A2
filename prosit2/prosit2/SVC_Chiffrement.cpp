#include "SVC_Chiffrement.h"
#include <iostream>

using namespace std;
//using namespace NS_COMP;
namespace NS_SVC


{
	SVC_Chiffrement::SVC_Chiffrement()
	{
		this->oCesar = nullptr;
		this->oXor = nullptr;
		this->oMixte = nullptr;
	}

	SVC_Chiffrement::~SVC_Chiffrement()
	{
		delete this->oCesar;
		delete this->oXor;
		delete this->oMixte;
	}

	void SVC_Chiffrement::chiffrer_ou_dechiffrer(int mode, bool chiffrement, const std::string& texte)
	{
		string resultat;
		int cleCesar = 3, cleXor = 42;

		switch (mode)
		{
		case 1:
			this->oCesar = new NS_COMP::COMP_Cesar(cleCesar);
			resultat = chiffrement ? oCesar->chiffrer(texte) : oCesar->dechiffrer(texte);
			break;

		case 2:
			this->oXor = new NS_COMP::COMP_XOR(cleXor);
			resultat = chiffrement ? oXor->chiffrer(texte) : oXor->dechiffrer(texte);
			break;

		case 3:
			this->oMixte = new NS_COMP::COMP_Mixte(cleCesar, cleXor);
			resultat = chiffrement ? oMixte->chiffrer(texte) : oMixte->dechiffrer(texte);
			break;

		default:
			cout << "Mode inconnu !" << endl;
			return;
		}

		cout << "Résultat : " << resultat << endl;
	}
}
