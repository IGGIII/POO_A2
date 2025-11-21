#include "COMP_Cesar.h"

using namespace std;
namespace NS_COMP
{
	COMP_Cesar::COMP_Cesar(int cle)
	{
		this->cle = cle;
	}

	string COMP_Cesar::chiffrer(const string& texte)
	{
		string res;
		for (char c : texte)
			res += c + cle;
		return res;
	}

	string COMP_Cesar::dechiffrer(const string& texte)
	{
		string res;
		for (char c : texte)
			res += c - cle;
		return res;
	}
}
