#include "PluginTemplate.h" // <- include your header file here (obviously)

// Set name, desc, version and the scope of application (Freeplay, Tutorial, Offline- or Onlinegame)
BAKKESMOD_PLUGIN(PluginTemplate, "Plugin Description", "0.0.1", 0)

// What should happen when the plugin gets loaded?
void PluginTemplate::onLoad()
{
	// do stuff
}

// What should happen when the plugin gets unloaded?
void PluginTemplate::onUnload()
{
	// do stuff
}
