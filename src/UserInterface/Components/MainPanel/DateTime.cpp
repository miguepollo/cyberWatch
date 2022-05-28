#include "config.h"

#include <LilyGoWatch.h>

#include "DateTime.h"
#include "UserInterface/Components/MainPanel/DateTime/DigitalClocks.h"
#include "UserInterface/Components/MainPanel/DateTime/AnalogClocks.h"
#include "UserInterface/Components/MainPanel/DateTime/Planetoid.h"
#include "UserInterface/Components/MainComponent.h"

void DateTime::render() {
	getCurrentFace()->render();
}

void DateTime::setShouldReRender(bool shouldReRender) {
	for (uint8_t i = 0; i <= FACES; i++) {
		_clockFaces[i]->setShouldReRender(shouldReRender);
	}
}

bool DateTime::handleVerticalSwipe(int8_t vector) {
	_currentFace += vector;
	if (_currentFace > FACES) {
		_currentFace = 0;
	}
	if (_currentFace < 0) {
		_currentFace = FACES;
	}

	getCurrentFace()->setShouldReRender(true);
	return true;
}

MainComponent *DateTime::getCurrentFace() {
	return _clockFaces[_currentFace];
}
