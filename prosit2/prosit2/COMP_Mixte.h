#pragma once
#include <string>
#include "COMP_Cesar.h"
#include "COMP_XOR.h"

namespace NS_COMP
{
	class COMP_Mixte
	{
	private:
		COMP_Cesar* oCesar;
		COMP_XOR* oXor;
	public:
		COMP_Mixte(int, int);
		~COMP_Mixte();
		std::string chiffrer(const std::string&);
		std::string dechiffrer(const std::string&);
	};
}
