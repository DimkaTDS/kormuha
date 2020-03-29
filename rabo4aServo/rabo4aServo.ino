#include <Servo.h> //используем библиотеку для работы с сервоприводом

Servo servo; //объявляем переменную servo типа Servo

void setup() //процедура setup

{

servo.attach(15); //привязываем привод к порту 10

}

void loop() //процедура loop

{

servo.write(100); //ставим вал под 0
delay(1000);
servo.write(60); //ставим вал под 0
delay(1000);




}
