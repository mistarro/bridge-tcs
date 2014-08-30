#include <bridge-tcs/core/Application.hpp>

namespace bridge_tcs {
namespace core {

void Application::run()
{
	evtStarting();
	
	while (true)
	{
		evtAskExit();
		
		if (exitflag)
			break;
			
		Rubber rubber;
		evtNewRubber(rubber);
	}
	
	// TODO: creating rubbers in loop
	
	evtExiting();
}
	
void Application::exit()
{
	exitflag = true;
}

} // namespace core
} // namespace bridge_tcs
