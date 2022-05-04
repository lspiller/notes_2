// Code 2
int main() {
  int x = 10;
  int y = 5;
  int z = 0;
  z = y+++++x; /*This shouldn't compile but y++ + ++x will*/
  return z;
}
