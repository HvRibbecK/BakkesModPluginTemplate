# BakkesModPluginTemplate
A template to quickly create a BakkesMod Plugin

## How to Use
Clone the reposetory to your PC and open it in your IDE. The basic model for creating the plugin is included; for more in-depth plugins, additional libraries and external files may have to be attached.
Make sure to set it to 'Release' and 'x64'. After you successfully build your .dll, put it in the bakkesmod plugin folder ([STEAMFOLDER]\steamapps\common\rocketleague\Binaries\Win64\bakkesmod\plugins).
When ingame, press F6 and type 'plugin load yourpluginname' to load your plugin. If you load just the unmodified template, there is obviously not going to happen anything.

### Auto-Update Script

### Set up a GUI
1. Create Commands etc. that you need with CvarManager and fill in all attributes (bakkesmodplugin.h)
2. Create a .set file in [STEAMFOLDER]\steamapps\common\rocketleague\Binaries\Win64\bakkesmod\plugins\settings)
3. Edit the .set file as you wish

.set file ID's:
number=action        	usage\
0 = button           	0|Label|console_command\
1 = checkbox         	1|Label|bool_cvar\
2 = slider range (f) 	2|Label|float_cvar|min|max\
3 = slider range (i)	3|Label|int_cvar|min|max\
4 = slider value (f)  	4|Label|float_cvar|min|max\
5 = slider value (i)   	5|Label|int_cvar|min|max\
6 = drop down         	6|Label|cvar|first_entry@value_of_entry&second_entry@value\
7 = same line           put 7 in between 2 components to make them appear on the same line\
8 = separator           put 8 in between 2 components to separate them with a line\
9 = Label               9|Label\
10 = grey out           10|condition_cvar\
11 = end grey out    	everything between 10 and 11 is disabled when the condition is false\
12 = text input         12|Label|cvar_to_write_text_input_to\

## Manual Set-up
1. Create Header and CPP File (must be the name of your plugin)
2. Change Project Settings
	- Configuration: Release, Platform: x64
	- Configurationssettings
		- General
			- Configuretype: Dynamische Bibliothek (.dll)
	- C/C++
		- General
			- Additional Includepaths: bakkesmodsdk/include path!
		- Precompiled Header
			- Precompiled Header: Do not use precompiled header
	- Linker
		- General
			- Additional Bibliotheken: bakkesmodsdk/lib path!
3. Fill in the bare code (main libs etc)
	- See GitHub Files

## Credits
Rocket Science: Made a detailed tutorial on how to create your own BM Plugins (https://www.youtube.com/watch?v=t-5SGaunD_s)\
HvRibbecK: Made this Template
