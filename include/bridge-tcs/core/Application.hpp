#ifndef BRIDGETCS_CORE_APPLICATION_HPP
#define BRIDGETCS_CORE_APPLICATION_HPP

#include <boost/signals2.hpp>

#include <bridge-tcs/core/Rubber.hpp>

namespace bridge_tcs {
namespace core {

class Application
{
public:
	void run();
	void exit();

	// events
	boost::signals2::signal<void ()> evtStarting;
	boost::signals2::signal<void ()> evtExiting;
	boost::signals2::signal<void (Rubber const &)> evtNewRubber;

	boost::signals2::signal<void ()> evtAskExit;
	
private:
	bool exitflag = false;
};

} // namespace core
} // namespace bridge_tcs

#endif // BRIDGETCS_CORE_APPLICATION_HPP
