string encode(string src)
{     
  //Your code here 
  int i=0,n=src.size();
  while(i<n)
  {
    int j=i;
    while(j<n && src[j]==src[i])
    {
        j++;
    }
    src.push_back(src[i]);
    src.push_back(j-i+'0');
    i=j;
  }
  
  src.erase(src.begin(),src.begin()+n);
  return src;
}   
