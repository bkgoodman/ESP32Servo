# C Port

This is my C port of the library below. 

## Example:

```
ESP32Servo *myServo;
myServo = = ESP32Servo_create(GPIO_NUM_23,400,2600,LEDC_CHANNEL_0,LEDC_TIMER_0);
		for (int i = 0; i<180; i++){
			ESP32Servo_write(myServo,i);
			vTaskDelay(10 / portTICK_RATE_MS);
		}
ESP32Servo_free(myServo);
```

# ESP32Servo
This idf-component permits to control hobby-grade servo motors using an [Espressif's ESP32 SoC](https://www.espressif.com/en/products/hardware/esp32/overview) (running [esp-idf](https://github.com/espressif/esp-idf))

Tested with [TowerPro - SG92R](http://www.towerpro.com.tw/product/sg92r-7/) and ESP32D0WDQ6 (DevKitC).

# Getting Started
<b>NOTE: this code is not (yet) Production Ready.</b>  
You can use this library as a component for your project:  
```
mkdir -p <YOUR_PROJECT_ROOT>/components/
cd <YOUR_PROJECT_ROOT>/components/
git clone https://github.com/ShellAddicted/ESP32Servo.git
```
for more details see [examples/](https://github.com/ShellAddicted/ESP32SimpleServo/tree/master/examples)  
