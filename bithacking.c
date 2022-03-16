// What does the following code do? Result stored in r

// F1
int x, y;
int r = ((x ^ y) < 0);

// F2
int v;
int const mask = v >> sizeof(int) * CHAR_BIT - 1;
unsigned int r = (v + mask) ^ mask;

// F3
int x;
int y;

int r = y ^ ((x ^ y) & -(x < y));

// F4
unsigned int v;
int r = (v & (v - 1)) == 0;

// F5
unsigned int v; // v < 32 bits
unsigned int r;

r =  ((v & 0xfff) * 0x1001001001001ULL & 0x84210842108421ULL) % 0x1f;
r += (((v & 0xfff000) >> 12) * 0x1001001001001ULL & 0x84210842108421ULL) % 
     0x1f;
r += ((v >> 24) * 0x1001001001001ULL & 0x84210842108421ULL) % 0x1f;
