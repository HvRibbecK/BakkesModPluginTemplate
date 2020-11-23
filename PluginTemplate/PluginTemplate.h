#pragma once
// Include needed librarys and headers for BM Plugins (bare)
#pragma comment( lib, "bakkesmod.lib" )
#include "bakkesmod/plugin/bakkesmodplugin.h"

// Declare all public and private methods and variables
class PluginTemplate : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	virtual void onLoad();
	virtual void onUnload();
};