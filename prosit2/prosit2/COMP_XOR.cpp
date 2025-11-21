#include "COMP_XOR.h"
using namespace std;

namespace NS_COMP

{
	COMP_XOR::COMP_XOR(int cle)
	{
		this->cle = cle;
	}

	string COMP_XOR::chiffrer(const string& texte)
	{
		string res;
		for (char c : texte)
			res += c ^ cle; // opération XOR
		return res;
	}

	string COMP_XOR::dechiffrer(const string& texte)
	{
		// XOR est symétrique, même opération pour déchiffrer
		return chiffrer(texte);
	}
}
