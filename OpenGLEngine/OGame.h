# pragma once

#include "OWindow.h"
#include <memory>

class OWindow;
class OGame
{
public:
	OGame();
	~OGame();

	void run();
	void quit();
protected:
	bool m_isRunning = true;
	std::unique_ptr<OWindow> m_display;

};

