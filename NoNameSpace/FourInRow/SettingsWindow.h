#pragma once
#include "Settings.h"
#include <stdlib.h>
#include <iostream>

/*
 * SettingsWindow shows the settings for the Settings so that the user can properly adjust them.
 */

class SettingsWindow
{
public:

	/* Constructor.
	 */
	SettingsWindow();

	/* Shows the settingsmenu.
	 * @return returns the setting.
	 */
	Settings* ShowSetting();

private:

	Settings* settings;

	SettingsWindow(const SettingsWindow& that);
	SettingsWindow& operator = (const SettingsWindow& that);
};

