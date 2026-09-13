//Simple program to mix colors of an RGB led to get new colors.


//Initialising pin variables
int red = 8;
int green = 9;
int blue = 10;



void setup() {
  // put your setup code here, to run once:

  //Setting up pin modes.
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Edit the digitalWrite commands using the legend below to experiment with the colors.
digitalWrite(red,LOW);
digitalWrite(green,HIGH);
digitalWrite(blue,HIGH);

// red + green + blue = white
// red + green = yellow
// red + blue = magenta
// green + blue = cyan
}
