void printArray(int *a, int size)
{
  for(int i=0;i<size;i++)
  {
    printf("%d ",*a);
    *a++;
  }
}
