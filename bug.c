int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20; 
  int y = *ptr; 
  printf("%d",y);
  free(ptr); //Error: free()ing a pointer to a stack variable
  return 0; 
}