#include "input.h"
#include <Windows.h>

void Input::SetMouse(float aXPos, float aYPos)
{
	SetCursorPos((int)aXPos, (int)aYPos);
}