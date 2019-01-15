#define DELAY			50000

#define ALIVE			1
#define DEAD			0
#define MAX_ITERATIONS	500	
#define ROW_SIZE		150	
// 0 = use OUT_OF_BOUND value 1: use valid neighbour 2: wrap
#define WRAPPING		2
#define OUT_OF_BOUND		1
#define EDGE_IGNORE		0
#define COLOR			COLOR_CYAN

void printRow(unsigned char*, int, int, int);
void updateRow(unsigned char*, int);
