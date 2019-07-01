int Hailstone (int n)
{
  if (n % 2 == 0) {
    return n /= 2;
  }
  else {
    return n = 3 * n + 1;
  }
  return n;
}

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
}

void loop() {
  int n=100; while(n!=1) {
    n = Hailstone(n);
    Serial.println(n);
    delay(100);
  }
}


