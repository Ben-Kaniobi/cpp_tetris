#define FOREVER      1
#define EXIT_SUCCESS 0

#include "error.h"
#include "window.h"
#include "communication.h"
//#include "ConsoleFunctions.h"

int gfxmain(int argc, char* argv[], const char *ApplicationPath)
{
	ColorType Col;
	Col.Red   = 0;
	Col.Green = 0xff;
	Col.Blue  = 0;
	Col.Alpha = 0xff;
	int Key = 0;

	InitGraphic(600, 400);
	DrawFilledRectangle(90, 90, 40, 40, Col, 1);

	while(FOREVER) {
		if(IsKeyPressReady()) {
			Key = GetKeyPress();
			if (Key == W_KEY_CLOSE_WINDOW) {
				/* Close the graphic window, cleanup and return */
				CloseGraphic();
				return EXIT_SUCCESS;
			}
		}
	}

	return EXIT_SUCCESS;
}
