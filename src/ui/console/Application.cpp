#include <iostream>
#include "Application.hpp"

namespace bridge_tcs {
namespace ui {
namespace console {

void Application::onStart()
{
	std::cout << "BridgeTCS version 0.1 alpha" << std::endl;
}

void Application::onExit()
{
	std::cout << "Bye!" << std::endl;
}

} // namespace console
} // namespace ui
} // namespace bridge_tcs
