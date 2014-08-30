#include <bridge-tcs/core/Application.hpp>
#include "ui/console/Application.hpp"

int main()
{
	bridge_tcs::core::Application application;
	bridge_tcs::ui::console::Application applicationView;

	applicationView.setTarget(application);
	
	application.run();
	return 0;
}
