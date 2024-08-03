char repeatedCharacter(string &str){
  int c[26] = {};
  for (int i = 0; i < str.size(); i++) {
	  int pos = str[i]-97;
			  c[pos]++;
  }
  for (int i = 0; i < str.size(); i++) {
	  int pos = str[i]-97;
	  if(c[pos]>1)
	  return str[i];
  }
  return '%';
}