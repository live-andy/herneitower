#include <iostream>

void TowerMove(int Number, char *Source, char *Dest, char *Temp);


int main()
{
	TowerMove(3, "Alpha", "Beta", "Cinema");
	std::cin.get();
}

void TowerMove(int Number, char *Source, char *Dest, char *Temp)
{
	if (Number < 1)
	{
		std::cout << "Idiot" << std::endl;
		return;
	}
	if (Number == 1)
	{
		std::cout << "Move From " << Source << " To " << Dest << std::endl;
		return;
	}
	TowerMove(Number - 1, Source,Temp,Dest);
	std::cout << "Move From " << Source << " To " << Dest << std::endl;
	TowerMove(Number - 1, Temp, Dest, Source);
}