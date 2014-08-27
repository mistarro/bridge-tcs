#include <bridge-tcs/core/Application.hpp>
#include "ui/console/Application.hpp"

int main()
{
	bridge_tcs::core::Application application;
	bridge_tcs::ui::console::Application applicationView;
	
	application.evtStarting.connect([&applicationView](){ applicationView.onStart(); });
	application.evtExiting.connect([&applicationView](){ applicationView.onExit(); });
	
	application.run();
	return 0;
}
