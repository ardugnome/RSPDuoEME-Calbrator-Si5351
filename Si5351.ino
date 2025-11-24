#include "si5351.h"
#include "Wire.h"

Si5351 si5351;

unsigned long long freq  = 14415550000ULL; // 211.600000MHz x 49 = 10368.4Mhz

void setup() {
//  si5351.set_correction(+900000, SI5351_PLL_INPUT_XO);
  si5351.init(SI5351_CRYSTAL_LOAD_8PF, 0, 0);            
  si5351.drive_strength(SI5351_CLK0, SI5351_DRIVE_8MA);  
  si5351.set_freq(freq, SI5351_CLK0);                    
  
}

void loop() {
}
