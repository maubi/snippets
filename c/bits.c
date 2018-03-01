#include <stdio.h>
#include <stdlib.h>

#define HAS_FANGS 1
#define HAS_WINGS 2

int main(int argc, char *argv[]) {
	struct bit {
		unsigned char has_wings: 1;
		unsigned char has_fangs: 1;
		unsigned char : 6;
	} bit1;

	unsigned char bit2 = 0;

	// bitfield
	bit1.has_wings = 1;
	bit1.has_fangs = 0;

	if (bit1.has_wings == 1 && bit1.has_fangs == 0) {
		printf("OK 1!\n");
	}

	// bitmasks
	bit2 |= HAS_FANGS;

	if ((bit2 & HAS_FANGS) == HAS_FANGS) {
		printf("OK 2!\n");
	}

	return 0;
}
