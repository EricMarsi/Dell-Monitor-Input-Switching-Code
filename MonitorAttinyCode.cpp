// Constants
const int S_LED = 1;  // Status LED
const int SW_I1 = 2;  // Toggle Switch to run stored proceedure
const int SW_O1 = 3;  // Source Button on the Monitor
const int SW_O2 = 4;  // OK Button on the Display

// Variables
int SW_I1_State = 0;  // Variable for Base Toggle Switch Status

void setup()
    {
        // Pin Setup as Inputs or Outputs
        pinMode(SW_I1, INPUT_PULLUP);
        pinMode(SW_O1, OUTPUT);
        pinMode(SW_O2, OUTPUT);
        pinMode(S_LED, OUTPUT);
    }

void loop()
    {
        SW_I1_State = digitalRead(SW_I1);  // Read the State of SW_I1
  
        if (SW_I1_State == LOW)  // If the button is pressed
            {
                digitalWrite(SW_O1, LOW);
                digitalWrite(S_LED, HIGH);
                delay(400);
                digitalWrite(SW_O1, HIGH);
                digitalWrite(S_LED, LOW);
                delay(800);
                digitalWrite(SW_O1, LOW);
                digitalWrite(S_LED, HIGH);
                delay(400);
                digitalWrite(SW_O1, HIGH);
                digitalWrite(S_LED, LOW);
                delay(800);
                digitalWrite(SW_O2, LOW);
                digitalWrite(S_LED, HIGH);
                delay(400);
                digitalWrite(SW_O2, HIGH);
                digitalWrite(S_LED, LOW);

                while(!digitalRead(SW_I1)){}  // If the button is still pressed, Do Nothing Until it is Released
            }
        else
            {
                digitalWrite(SW_O1, HIGH);  // Keep All Output Pins HIGH if the button was not pressed
                digitalWrite(SW_O2, HIGH);
                digitalWrite(S_LED, LOW);
            }
    }