int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20; 
  int y = *ptr; 
  printf("%d",y);
  //Removed free(ptr); //Correct: Do not free stack memory
  return 0; 
}