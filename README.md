# Automated-ant-scale
Code for an automated ant isolating system uses a slightly altered code from https://github.com/FabianPlum/TheStick/ \
Follow the downlaod instructions in the above linked github readme, then replace "THE_STICK_YOLO.py" and "tracker.py" with the files of the same name in this repositry


## Using the automated ant isolation system code ##
To run the code, make sure the directory is where the python code files are in:

```
conda activate depthai

python THE_STICK_YOLO.py
```


## Arduino INO files
To be uploaded to the arduino controlling the bridge motor:
```
OAKDcam.ino
```


# Ant scale code
Requires the HX711_ADC library from https://github.com/olkal/HX711_ADC \
Requires the LCD_I2C library from https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library

## Arduino INO files
To be uploaded to the arduino controlling the weighing scale,\
for callibration:
```
Callibration_wLCDtestcode.ino
```
after calibration, upload:
```
Read_LoadCell_wLCDcode.ino
```
Coefficients must be adjusted for every calibration value after calibration. Default coefficients assumes a calibration mass of 20g
