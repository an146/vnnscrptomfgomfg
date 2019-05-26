#include <iostream>

static std::string prg;

class vctm
{
} nxt_vctm;

bool fnd_vctm()
{
	return false;
}

void gvl_vctm()
{
}

void gvl_frth()
{
	std::cout << prg;
}

extern "C" void interp()
{
	char c;
	while (std::cin >> c)
		prg.push_back(c);
	while (fnd_vctm())
		gvl_vctm();
	gvl_frth();
	std::cout << "ZBS" << std::endl;
}
