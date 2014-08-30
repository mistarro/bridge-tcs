#ifndef BRIDGETCS_UI_CONSOLE_APPLICATION_HPP
#define BRIDGETCS_UI_CONSOLE_APPLICATION_HPP

#include <bridge-tcs/core/Application.hpp>
#include <bridge-tcs/core/Rubber.hpp>

namespace bridge_tcs {
namespace ui {
namespace console {

class Application
{
public:
	void setTarget(core::Application & app);

	// handlers
	void onStart();
	void onExit();
	void onNewRubber(core::Rubber const & rubber);

	void onAskExit();

private:
	core::Application * target;
};

} // namespace console
} // namespace ui
} // namespace bridge_tcs

#endif // BRIDGETCS_UI_CONSOLE_APPLICATION_HPP
