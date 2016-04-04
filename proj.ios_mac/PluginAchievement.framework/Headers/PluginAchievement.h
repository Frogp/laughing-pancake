/****************************************************************************

 Copyright (c) 2014-2016 SDKBOX Inc

 ****************************************************************************/

#ifndef _SDKBOX_PLUGIN_ACHIEVEMENT_H_
#define _SDKBOX_PLUGIN_ACHIEVEMENT_H_

#include <string>
#include <vector>

namespace sdkbox
{
    class PluginAchievement
    {
    public:
    	static void init();
        static void unlock(const std::string& achievementId);
    };
}

#endif
