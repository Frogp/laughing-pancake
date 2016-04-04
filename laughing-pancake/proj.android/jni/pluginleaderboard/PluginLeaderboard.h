/****************************************************************************

 Copyright (c) 2014-2016 SDKBOX Inc

 ****************************************************************************/

#ifndef _SDKBOX_LEADERBOARD_H_
#define _SDKBOX_LEADERBOARD_H_

#include <string>
#include <map>

namespace sdkbox
{
	class LeaderboardListener
	{
	public:
		virtual void onComplete(std::string leaderboard) = 0;
		virtual void onFail() = 0;
	};
    class PluginLeaderboard
    {
    public:
		/**
        * Initialize SDKBox Leaderboard
        */
        static void init();

    	/**
        * Set listener for Leaderboard
        */
        static void setListener(LeaderboardListener* listener);

        /**
         * Get listener of Leaderboard
         */
        static LeaderboardListener* getListener();

        /**
        * Remove listener for Leaderboard
        */
        static void removeListener();

		static void submitScore(const std::string& leaderboardId, int score);
        static void getLeaderboard(const std::string& leaderboardId);
    };
}

#endif
