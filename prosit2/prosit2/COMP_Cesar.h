#pragma once
#include <string>

using namespace std;
namespace NS_COMP
{
	class COMP_Cesar
	{
	private:
		int cle;
	public:
		COMP_Cesar(int);
		string chiffrer(const string&);
		string dechiffrer(const string&);
	};
}
