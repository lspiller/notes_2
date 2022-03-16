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
unsigned int v; // v <  128 bits
unsigned int r;
unsigned int v = v - ((v >> 1) & (T)~(T)0/3);
v = (v & (T)~(T)0/15*3) + ((v >> 2) & (T)~(T)0/15*3);
v = (v + (v >> 4)) & (T)~(T)0/255*15;
c = (T)(v * ((T)~(T)0/255)) >> (sizeof(T) - 1) * CHAR_BIT;

// F7
unsigned char b;
int r = 
  (((b * 0x0101010101010101ULL) & 0x8040201008040201ULL) % 0x1FF) & 1;

// F8
int a, b
a ^= b;
b ^= a;
a ^= b;
// result is a, b

