
//******************************************************
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#ifndef PAINT_AREA_STATE_H
#define PAINT_AREA_STATE_H

/**
 * That state that is held and interacted with for the paint area.
 */
class PaintAreaState {
    public:
        PaintAreaState();

        void setBackgroundColor(Color backgroundColor);
        Color getBackgroundColor();

        void apply();
    private:
        Color backgroundColor;
        bool backgroundColorDirty;
};
extern PaintAreaState paintAreaState;

extern "C" void setPaBackgroundColor(int r, int g, int b);

#endif

