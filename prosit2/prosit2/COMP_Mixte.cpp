#include "COMP_Mixte.h"
using namespace std;

namespace NS_COMP
{
	COMP_Mixte::COMP_Mixte(int cleCesar, int cleXor)
	{
		this->oCesar = new COMP_Cesar(cleCesar);
		this->oXor = new COMP_XOR(cleXor);
	}

	COMP_Mixte::~COMP_Mixte()
	{
		delete this->oCesar;
		delete this->oXor;
	}

	string COMP_Mixte::chiffrer(const string& texte)
	{
		// Exemple : César puis XOR
		return oXor->chiffrer(oCesar->chiffrer(texte));
	}

	string COMP_Mixte::dechiffrer(const string& texte)
	{
		// Déchiffrement inverse : XOR puis César
		return oCesar->dechiffrer(oXor->dechiffrer(texte));
	}
}
