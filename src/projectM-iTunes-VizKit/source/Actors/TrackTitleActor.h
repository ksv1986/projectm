/*
 * Project: VizKit
 * Version: 1.9
 
 * Date: 20070503
 * File: TrackTitleActor.h
 *
 */

/***************************************************************************

Copyright (c) 2004-2007 Heiko Wichmann (http://www.imagomat.de/vizkit)


This software is provided 'as-is', without any expressed or implied warranty. 
In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; 
   you must not claim that you wrote the original software. 
   If you use this software in a product, an acknowledgment 
   in the product documentation would be appreciated 
   but is not required.

2. Altered source versions must be plainly marked as such, 
   and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

 ***************************************************************************/

#ifndef TrackTitleActor_h
#define TrackTitleActor_h

#include "VisualActor.h"

#if TARGET_OS_MAC
#include <CoreServices/../Frameworks/CarbonCore.framework/Headers/MacTypes.h>
#endif

#if TARGET_OS_WIN
#include <QT/MacTypes.h>
#endif


namespace VizKit {

	class TrackTitle;

	/**
	 * The title of the audio track is displayed as texture with blended colors.
	 * The texture of the track name can be manipulated in various ways.
	 * The smooth shading (Gouraud shading) from red to yellow is a simple example.
	 */
	class TrackTitleActor : public VisualActor {

	public:

		/**
		 * The constructor.
		 */
		TrackTitleActor();
		
		/**
		 * The destructor.
		 */
		~TrackTitleActor();

		/**
		 * Performs the show of the track title.
		 */
		virtual void show();
		
		/**
		 * Clears any memory allocated by the actor or action.
		 */
		void clear(void);

		/**
		 * The actor receives a notification about an event that occured.
		 * @param aNotification The notification passed in.
		 */
		virtual void handleNotification(const VisualNotification& aNotification);
		
	private:

		/** A pointer to the track title action. */
		TrackTitle* trackTitle;

		/** True if texture of current audio track's title has been created. */
		bool textureOfCurrentTrackTitleIsAvailable;
		
	};

}


#endif /* TrackTitleActor_h */
