/ Proyek #13: Sensor PIR
int ledPin = 11;//LED ditempatkan pd pin 11
int pinPIR = 2; //pinout sensor PIR pada pin 2 arduino
int val = 0;//variabel untuk membaca status pin
int pinbuzzer = 6;//buzzer ditmptkan pd pin 6

void setup() {
  pinMode(ledPin, OUTPUT);//deklarasi LED sbg output
  pinMode(pinPIR, INPUT); //deklarasi sensor sbg input
  pinMode(pinbuzzer, OUTPUT); //deklarasi buzer sbg output
  }

void loop(){
  val = digitalRead(pinPIR);//baca input sensor
  if (val == HIGH) { // cek jika input bernilai HIGH
    digitalWrite(ledPin, HIGH);//on-kan LED
    tone(pinbuzzer, 500);//bunyikan alarm/buzer
    delay(2000);//tunda selama 2 detik
    } else {
      digitalWrite(ledPin, LOW); //off-kan LED 
      noTone(pinbuzzer);//off-kan buzzer/alarm
      }
}