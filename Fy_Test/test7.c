int main() {
  int a;
  int b;
  int c;
  a = 3;
  b = 5;
  c = a * (b-2);
  if( a<3 && b>10) {
    a = 5 * (b+c);
  }else if( c>9 && ( a<2 || b+3 > 9)) { 
    a = 6;
  }else { 
    a = 7;
  }

  return 0;
}

