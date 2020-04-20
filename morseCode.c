
void setup(){
	Serial.begin(9600);
	pinMode(7,OUTPUT);
}

int space = 150

void dot(){
	digitalWrite(7,HIGH);
	delay(50);
	digitalWrite(7,LOW);
	delay(100);
}

void dash(){
	digitalWrite(7,HIGH);
	delay(150);
	digitalWrite(7,LOW);
	delay(100);
}



void translate(char x){
	switch(x){
		case 'C':
		dash();
		delay(space);
		dot();
		delay(space);
		dash();
		delay(space);
		dot();
		delay(space);
		break;

		case 'F':
		dot();
		delay(space);
		dot();
		delay(space);
		dash();
		delay(space);
		dot();
		delay(space);
		break;

		case 'K':
		dash();
		delay(space);
		dot();
		delay(space);
		dash();
		delay(space);
		break;

		case 'O':
		dash();
		delay(space);
		dot();
		delay(space);
		dash();
		delay(space);
		dash();
		delay(space);
		break;

		case 'U':
		dash();
		delay(space);
		dash();
		delay(space);
		dash();
		delay(space);
		break;

		case 'Y':
		dash();
		delay(space);
		dot();
		delay(space);
		dash();
		delay(space);
		dash();
		delay(space);
		break;
	}

}
	

void loop(){
	
	char input[100] = "FUCK YOU"
	int i=0;
	while(input[i]!='\n'){
		translate(input(i))
	}

}