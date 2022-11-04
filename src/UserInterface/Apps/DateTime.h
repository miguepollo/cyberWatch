#pragma once

#include <Arduino.h>

#include "UserInterface/App.h"
#include "UserInterface/WatchFaces/AnalogClocks.h"
#include "UserInterface/WatchFaces/Planetoid.h"
#include "UserInterface/WatchFaces/DigitalClocks.h"
#include "UserInterface/WatchFaces/ProgressBars.h"
#include "UserInterface/WatchFaces/NeonCircles.h"
#include "UserInterface/WatchFaces/SensorGrid.h"
#include "UserInterface/WatchFaces/KnightRider.h"

class DateTime : public App {

	public:

		bool handleSwipeVertical(int8_t vector);
		void setShouldReRender(bool shouldReRender);
		MainComponent *getCurrentFace();
		void render();


		bool handlePEKShort();

		DateTime();

	protected:

		const int FACES = 6;

		MainComponent *clockFaces[7];
		int8_t currentFace = 6;

		void createFaces() {
			clockFaces[0] = new DigitalClocks();
			clockFaces[1] = new AnalogClocks();
			clockFaces[2] = new Planetoid();
			clockFaces[3] = new ProgressBars();
			clockFaces[4] = new NeonCircles();
			clockFaces[5] = new SensorGrid();
			clockFaces[6] = new KnightRider();
		}

};