int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    // int cnt=0;
	if(size==0)
    {
        return -1;
    }
    if(input[0]==x)
    {
        return 0;
    }

    int small = firstIndex(input + 1, size - 1, x);
    if(small==-1)
    {
        return small;
    }
    else {
      return small + 1;
    }
}

