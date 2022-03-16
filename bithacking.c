// What does the following code do? Result stored in r

// F1
int x, y;
bool f = ((x ^ y) < 0);

// F2
int v;
unsigned int r;
int const mask = v >> sizeof(int) * CHAR_BIT - 1;
r = (v + mask) ^ mask;

// F3
int x;
int y;   
int r;

r = y ^ ((x ^ y) & -(x < y));
