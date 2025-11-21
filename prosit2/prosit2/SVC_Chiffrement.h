#pragma once
#include "COMP_Cesar.h"
#include "COMP_XOR.h"
#include "COMP_Mixte.h"
#include <string>

namespace NS_SVC
{
	class SVC_Chiffrement
	{
	private:
		NS_COMP::COMP_Cesar* oCesar;//on spécifie d ou vient la class ici du groupe NS_COMP
		NS_COMP::COMP_XOR* oXor;
		NS_COMP::COMP_Mixte* oMixte;
	public:
		SVC_Chiffrement();
		~SVC_Chiffrement();
		void chiffrer_ou_dechiffrer(int mode, bool chiffrement, const std::string& texte);
	};
}
