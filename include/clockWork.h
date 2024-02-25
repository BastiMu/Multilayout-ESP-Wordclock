#pragma once

#include <NeoPixelBus.h>

class ClockWork {
private:
    uint16_t countMillisSpeed = 0;
    uint32_t previousMillis = 0;
    bool initBH1750 = false;
    float lux = 0.0;

private:
    //------------------------------------------------------------------------------
    // Helper Functions
    //------------------------------------------------------------------------------
    void loopLdrLogic();
    void initBH1750Logic();
    void loopBH1750Logic();
    uint32_t num32BitWithOnesAccordingToColumns();
    bool isRomanLanguage();

    //------------------------------------------------------------------------------
    // Front Effect Functions
    //------------------------------------------------------------------------------
    void rainbow();
    void rainbowCycle();
    void scrollingText(const char *buf);
    void displaySymbols(uint8_t iconNum);
    void countdownToMidnight();

    //------------------------------------------------------------------------------
    // Minute Functions
    //------------------------------------------------------------------------------
    void showMinuteInWords(uint8_t min);
    void showMinute(uint8_t min);
    void resetMinVariantIfNotAvailable();
    FrontWord getFrontWordForNum(uint8_t min);
    void setMinute(uint8_t min, uint8_t &offsetHour, bool &fullHour);

    //------------------------------------------------------------------------------
    // Hour Functions
    //------------------------------------------------------------------------------
    void setHour(uint8_t std, const bool fullHour);

    //------------------------------------------------------------------------------
    // Loop Helper Functions
    //------------------------------------------------------------------------------

    bool isMidnight(const uint8_t hour);
    WordclockChanges changesInClockface();
    void calcClockface();
    void setClock();
    void clearClockByProgInit();

public:
    //ClockWork() = default;
    ~ClockWork() = default;

    //------------------------------------------------------------------------------
    // Helper Functions
    //------------------------------------------------------------------------------
    iUhrType *getPointer(uint8_t type);
    void initLedStrip(uint8_t num);

    //------------------------------------------------------------------------------
    // Minute Functions
    //------------------------------------------------------------------------------
    uint8_t determineWhichMinuteVariant();

    //------------------------------------------------------------------------------
    // Boot Functions
    //------------------------------------------------------------------------------
    void initBootLed();
    void initBootLedBlink();
    void initBootLedSweep(uint32_t delay);
    void initBootShowIp(const char *buf);
    void initBootWifiSignalStrength(int strength);

    //------------------------------------------------------------------------------
    // Loop Functions
    //------------------------------------------------------------------------------
    void loop(struct tm &tm);
};
