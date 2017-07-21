// float -> float
// Returns double the value of the given number
/* stub
float twice(float n) {
return 0;
}
*/
/* template
float twice(float n) {
return ... n;
}
*/
float twice(float n) {
return n * 2;
}
int main() {
printf("%d, %f == %f\n", twice(2.0) == 4.0, twice(2.0), 4.0);
printf("%d, %f == %f\n", twice(1.5) == 1.5 * 2, twice(1.5), 1.5 * 2);
printf("%d, %f == %f\n", twice(5.0) == 10.0, twice(5.0), 10.0);
return 0;
}
