// What does the following code do? Result stored in r

// F1
int x, y;
bool r = ((x ^ y) < 0);

// F2
int v;
int const mask = v >> sizeof(int) * CHAR_BIT - 1;
unsigned int r = (v + mask) ^ mask;

// F3
int x;
int y;

int r = y ^ ((x ^ y) & -(x < y));
