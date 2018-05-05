int A = 22;
int B = 23;
int C = 24;
int D = 25;
int E = 26;
int F = 27;
int G = 28;
int H = 29;
int I = 30;
int J = 31;
int K = 32;
int L = 33;
int M = 34;
int N = 35;
int O = 36;
int P = 37;



int i = 0;
int incomingByte[16];

void setup()
{
  Serial.begin(9600);

  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
  pinMode(I, OUTPUT);
  pinMode(J, OUTPUT);
  pinMode(K, OUTPUT);
  pinMode(L, OUTPUT);
  pinMode(M, OUTPUT);
  pinMode(N, OUTPUT);
  pinMode(O, OUTPUT);
  pinMode(P, OUTPUT);


}

void loop()
{
  if (Serial.available() >= 16)
  {
    for (int i=0; i<16;i++)
    {
      incomingByte[i] = Serial.read();
    }                                       // Arduino pins
    digitalWrite(A, incomingByte[0]);  // Pin 2
    digitalWrite(B, incomingByte[1]);  // Pin 3
    digitalWrite(C, incomingByte[2]);  // Pin 4
    digitalWrite(D, incomingByte[3]);  // Pin 5
    digitalWrite(E, incomingByte[4]);  // Pin 6
    digitalWrite(F, incomingByte[5]);  // Pin 7
    digitalWrite(G, incomingByte[6]);  // Pin 8
    digitalWrite(H, incomingByte[7]);  // Pin 9
    digitalWrite(I, incomingByte[8]);  // Pin 10
    digitalWrite(J, incomingByte[9]);  // Pin 11
    digitalWrite(K, incomingByte[10]); // Pin 12
    digitalWrite(L, incomingByte[11]); // Pin 13
    digitalWrite(M, incomingByte[12]); // Pin A0
    digitalWrite(N, incomingByte[13]); // Pin A1
    digitalWrite(O, incomingByte[14]); // Pin A2
    digitalWrite(P, incomingByte[15]); // Pin A2
    
  }
}
