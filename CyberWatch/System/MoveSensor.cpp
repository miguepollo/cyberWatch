#pragma once

class MoveSensor {

  public:

    static MoveSensor *getInstance()
    {
        if (MoveSensor::_inst == nullptr) {
            MoveSensor::_inst = new MoveSensor();
        }
        return MoveSensor::_inst;
    }

    void initIRQ() {
      Acfg cfg;
      cfg.odr = BMA4_OUTPUT_DATA_RATE_100HZ;
      cfg.range = BMA4_ACCEL_RANGE_2G;
      cfg.bandwidth = BMA4_ACCEL_NORMAL_AVG4;
      cfg.perf_mode = BMA4_CONTINUOUS_MODE;
      TTGOClass::getWatch()->bma->accelConfig(cfg);
      TTGOClass::getWatch()->bma->enableAccel();
      pinMode(BMA423_INT1, INPUT);
      attachInterrupt(
        BMA423_INT1,
        [] {
          MoveSensor::getInstance()->setIsIRQ();
        },
        RISING
      ); //It must be a rising edge
      TTGOClass::getWatch()->bma->enableFeature(BMA423_STEP_CNTR, true);
      TTGOClass::getWatch()->bma->enableFeature(BMA423_TILT, true);
      TTGOClass::getWatch()->bma->enableTiltInterrupt();
      TTGOClass::getWatch()->bma->enableWakeupInterrupt();
    }

    void cleanIRQ() {
      _IRQ = false;
      TTGOClass::getWatch()->power->clearIRQ();
    }

    void setIsIRQ() {
      _IRQ = true;
    }

    bool isTilt() {
      if (_IRQ) {
        MoveSensor::getInstance()->cleanIRQ();
        return true;
      }
      return false;
    }
    
  protected:

    static MoveSensor *_inst;

    bool _IRQ = false;

    MoveSensor() {  
    }

};

MoveSensor* MoveSensor::_inst;