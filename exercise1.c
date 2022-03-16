long stack_check( long a,  long b,  long c,  long d,  
                  long e,  long f,  long g,  long h ) {
    long xx = a * b * c * d * e * f * g * h;
	long yy = a + b + c + d + e + f + g + h;
    long zz = xx % yy;
    return zz + 20;
}

int main() {
    stack_check(11,  22,  33, 44, 55, 66, 77, 88);
	return 0;
}
