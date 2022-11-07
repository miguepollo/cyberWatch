#include "config.h"

#include "Locked.h"

#include <LilyGoWatch.h>
#include "UserInterface/Screens/MainScreen.h"
#include "UserInterface/UserInterfaceManager.h"

void Locked::render() {
	if (
		UserInterfaceManager::getInstance()->isLocked() == false
	) {
		MainScreen::getInstance()->setToDefaultApp();
		return;
	}

	if (this->shouldReRender()) {
		TTGOClass::getWatch()->tft->fillRect(
			0,
			0,
			TTGOClass::getWatch()->tft->width(),
			TTGOClass::getWatch()->tft->height(),
			COLOR_BACKGROUND
		);

		TTGOClass::getWatch()->tft->drawRect(
			10,
			40,
			TTGOClass::getWatch()->tft->width() - 20,
			160,
			COLOR_MAIN_1
		);

		this->renderText(1, "Device is locked.");
		this->renderText(3, "Touch display for" );
		this->renderText(4, "at least 0.5 sec");
		this->renderText(5, "or press crown ");
		this->renderText(6, "button to unlock..");
	}
	this->setShouldReRender(false);
}

void Locked::renderText(uint8_t line, char* text) {
	uint8_t posX = (TTGOClass::getWatch()->tft->width() - TTGOClass::getWatch()->tft->textWidth(text)) / 2;
	TTGOClass::getWatch()->tft->drawString(
		text,
		posX,
		51 + 23 * (line - 1)
	);
}

bool Locked::handlePEKShort() {
	UserInterfaceManager::getInstance()->setIsLocked(false);
	return true;
}