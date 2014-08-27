#ifndef BRIDGETCS_CORE_APPLICATION_HPP
#define BRIDGETCS_CORE_APPLICATION_HPP

#include <boost/signals2.hpp>

namespace bridge_tcs {
namespace core {

class Application
{
public:
	void run();
	
	boost::signals2::signal<void ()> evtStarting;
	boost::signals2::signal<void ()> evtExiting;
};

} // namespace core
} // namespace bridge_tcs

#endif // BRIDGETCS_CORE_APPLICATION_HPP
