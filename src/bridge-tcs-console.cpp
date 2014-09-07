#include <iostream>
#include <bridge-tcs/core/Rubber.hpp>
#include "ui/console/Rubber.hpp"

int main()
{
	std::cout << "BridgeTCS version 0.1 alpha" << std::endl;

	while (true)
	{
		std::cout << "New rubber (n) or exit (e): ";
		char choice;
		std::cin >> choice;
		if (choice != 'n')
			break;
		
		bridge_tcs::core::Rubber rubber;
		bridge_tcs::ui::console::Rubber rubberView;
		rubberView.setTarget(rubber);
		rubber.play();
	}
	
	std::cout << "Bye!" << std::endl;

	return 0;
}
