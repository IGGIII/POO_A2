#pragma once
#include <string>

namespace NS_COMP
{
	class COMP_XOR
	{
	private:
		int cle;
	public:
		COMP_XOR(int);
		std::string chiffrer(const std::string&);
		std::string dechiffrer(const std::string&);
	};
}
