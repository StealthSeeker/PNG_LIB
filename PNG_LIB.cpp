#include "PNG_LIB.h"

void PNG_LIB::debuff() {
	if (buffer != NULL) {
		free(buffer);
		bufferSize = 0;
	}
}