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

// F6
unsigned char b;
int r = 
  (((b * 0x0101010101010101ULL) & 0x8040201008040201ULL) % 0x1FF) & 1;

// F7
int a, b
a ^= b;
b ^= a;
a ^= b;
// result is a, b

// F8
unsigned int v;
int r;
float f = (float)(v & -v);
r = (*(uint32_t *)&f >> 23) - 0x7f;

// F9
unsigned int v; // 32-bit v

v--;
v |= v >> 1;
v |= v >> 2;
v |= v >> 4;
v |= v >> 8;
v |= v >> 16;
v++;
int r = v;
