#include <iostream>
#include "Application.hpp"

namespace bridge_tcs {
namespace ui {
namespace console {

void Application::setTarget(core::Application & application)
{
	target = &application;
	application.evtStarting.connect([this](){ onStart(); });
	application.evtExiting.connect([this](){ onExit(); });
	application.evtNewRubber.connect([this](core::Rubber const & rubber){ onNewRubber(rubber); });

	application.evtAskExit.connect([this](){ onAskExit(); });
}

void Application::onStart()
{
	std::cout << "BridgeTCS version 0.1 alpha" << std::endl;
}

void Application::onExit()
{
	std::cout << "Bye!" << std::endl;
}

void Application::onAskExit()
{
	std::cout << "New rubber (n) or exit (any other key): ";
	char choice;
	std::cin >> choice;
	if (choice != 'n')
		target->exit();
}

void Application::onNewRubber(core::Rubber const & rubber)
{
	std::cout << "New rubber object created, address: " << (&rubber) << std::endl;
}

} // namespace console
} // namespace ui
} // namespace bridge_tcs
