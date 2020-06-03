#pragma once
// LEDMatrix.h
#include "Display.h"
#include "Sequencer.h"

namespace supersixteen {

class LedMatrix{
    public:
        void init(Display &display, Sequencer &sequencer);

        void updateMatrix(int row);

        void blankMatrix(int row);

        void multiplexLeds();

        void blinkStep(); 

        void blinkLed();

        void blinkCurrentStep();

        void reset();

        void setMatrixFromSequencer(byte bar);

        void toggleLed(int led);
    
};

}