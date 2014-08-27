#include <bridge-tcs/core/Application.hpp>

namespace bridge_tcs {
namespace core {

void Application::run()
{
	evtStarting();
	
	// TODO: creating rubbers in loop
	
	evtExiting();
}
	
} // namespace core
} // namespace bridge_tcs
