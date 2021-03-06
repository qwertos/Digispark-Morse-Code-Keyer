
//The MIT License (MIT)
//
//Copyright (c) 2013, Aaron Herting <aaron@herting.cc>
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included in
//all copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//THE SOFTWARE.



int dah_pin = 2;
int dit_pin = 5;

int out_pin = 0;

double scale = 0.6;

int dit_length = 100 * scale; //ms
int dah_length = 300 * scale; //ms
int space_length = 100 * scale; //ms


void setup() {
  pinMode(out_pin, OUTPUT);
}

void loop() {
  if( digitalRead(dah_pin) == LOW ) {
    dah();
  }
  if( digitalRead(dit_pin) == LOW ) {
    dit();
  }
}

void dit() {
  digitalWrite(out_pin, HIGH);
  delay(dit_length);
  digitalWrite(out_pin, LOW);
  delay(space_length);
}

void dah() {
  digitalWrite(out_pin, HIGH);
  delay(dah_length);
  digitalWrite(out_pin, LOW);
  delay(space_length);
}
