#pragma once

#include <pgmspace.h>
#include <Arduino.h>
#include "UserInterface/Icons/IconStruct.h"

const IconStruct iconLock PROGMEM = {
	18,
	20,
	{
		0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07c0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
		0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x0000,
		0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x0740, 0x07e0, 0x07e0, 0x07e0,
		0x07e0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0080, 0x07e0, 0x07e0, 0x0220, 0x0000, 0x0000, 0x0000,
		0x0000, 0x07e0, 0x07e0, 0x07e0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07e0, 0x07e0, 0x07e0, 0x0000, 0x0000,
		0x0000, 0x0000, 0x0000, 0x0000, 0x07e0, 0x07e0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07e0, 0x07e0, 0x07e0,
		0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07e0, 0x07e0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07e0,
		0x07e0, 0x07e0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07e0, 0x07e0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
		0x05c0, 0x07e0, 0x07e0, 0x07e0, 0x05c0, 0x05c0, 0x05c0, 0x05c0, 0x05c0, 0x05c0, 0x07e0, 0x07e0, 0x05c0, 0x00e0, 0x0000, 0x0000,
		0x0600, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
		0x07e0, 0x0000, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
		0x07e0, 0x07e0, 0x07e0, 0x00c0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
		0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x0400, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
		0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x0400, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
		0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x0400, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
		0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x0400, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
		0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x0400, 0x07e0, 0x07e0,
		0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x0400,
		0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
		0x07e0, 0x0400, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
		0x07e0, 0x07e0, 0x07e0, 0x03e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
		0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x0000, 0x0000, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0,
		0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x0640, 0x0000
	}
};