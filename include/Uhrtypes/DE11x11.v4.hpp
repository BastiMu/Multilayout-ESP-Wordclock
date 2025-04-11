#pragma once

#include "Uhrtype.hpp"

/*
 *           Layout Front
 *                COL
 *       X 9 8 7 6 5 4 3 2 1 0
 * ROW + - - - - - - - - - - -
 *  0  | Z W E I N E D R E I Z
 *  1  | V I E R O N F Ü N F E
 *  2  | S E C H S I E B E N H
 *  3  | A C H T W L A N E U N
 *  4  | M I N O V O R N A C H
 *  5  | D R E I V I E R T E L
 *  6  | H A L B I Z W E I N S
 *  7  | S I E B E N S E C H S
 *  8  | F Ü N F R D R A C H T
 *  9  | N E U N D E I Z E H N
 *  X  | E L F Z W Ö L F U H R
 */

class De11x11V4_t : public iUhrType {
public:
    virtual LanguageAbbreviation usedLang() override {
        return LanguageAbbreviation::DE;
    };

    //------------------------------------------------------------------------------

    virtual const uint8_t rowsWordMatrix() override { return 11; };

    //------------------------------------------------------------------------------

    virtual const uint8_t colsWordMatrix() override { return 11; };

    //------------------------------------------------------------------------------

    virtual const bool hasDreiviertel() override { return true; }

    //------------------------------------------------------------------------------

    virtual const bool has60MinuteLayout() override { return true; }


    //------------------------------------------------------------------------------
    
    void show(FrontWord word) override {
        switch (word) {

        // minutes
        case FrontWord::min_1:
            setFrontMatrixWord(0, 5, 8);
            if (_minute == 1) {
                show(FrontWord::nach);
            }
            break;

        case FrontWord::min_2:
            setFrontMatrixWord(0, 7, 10);
            if (_minute == 2) {
                show(FrontWord::nach);
            }
            break;

        case FrontWord::min_3:
            setFrontMatrixWord(0, 1, 4);
            if (_minute == 3) {
                show(FrontWord::nach);
            }
            break;

        case FrontWord::min_4:
            setFrontMatrixWord(1, 7, 10);
            if (_minute == 4) {
                show(FrontWord::nach);
            }
            break;

        case FrontWord::min_5:
            setFrontMatrixWord(1, 1, 4);
            if (_minute == 5) {
                show(FrontWord::nach);
            }
            break;

        case FrontWord::min_6:
            setFrontMatrixWord(2, 6, 10);
            if (_minute == 6) {
                show(FrontWord::nach);
            }
            break;

        case FrontWord::min_7:
            setFrontMatrixWord(2, 1, 6);
            if (_minute == 7) {
                show(FrontWord::nach);
            }
            break;

        case FrontWord::min_8:
            setFrontMatrixWord(3, 7, 10);
            if (_minute == 8) {
                show(FrontWord::nach);
            }
            break;

        case FrontWord::min_9:
            setFrontMatrixWord(3, 0, 3);
            if (_minute == 9) {
                show(FrontWord::nach);
            }
            break;

        case FrontWord::min_10:
            setFrontMatrixPixel(0, 0); // Z
            setFrontMatrixPixel(1, 0); // E
            setFrontMatrixPixel(2, 0); // H
            setFrontMatrixPixel(3, 0); // N
            if (_minute == 10) {
                show(FrontWord::nach);
            }
            break;

        case FrontWord::min_11:
            show(FrontWord::min_4);
            show(FrontWord::vor);
            show(FrontWord::viertel);
            break;

        case FrontWord::min_12:
            show(FrontWord::min_3);
            show(FrontWord::vor);
            show(FrontWord::viertel);
            break;

        case FrontWord::min_13:
            show(FrontWord::min_2);
            show(FrontWord::vor);
            show(FrontWord::viertel);
            break;

        case FrontWord::min_14:
            show(FrontWord::min_1);
            show(FrontWord::vor);
            show(FrontWord::viertel);
            break;

        case FrontWord::min_15:
            show(FrontWord::viertel);
            break;

        case FrontWord::min_16:
            show(FrontWord::min_1);
            show(FrontWord::nach);
            show(FrontWord::viertel);
            break;

        case FrontWord::min_17:
            show(FrontWord::min_2);
            show(FrontWord::nach);
            show(FrontWord::viertel);
            break;

        case FrontWord::min_18:
            show(FrontWord::min_3);
            show(FrontWord::nach);
            show(FrontWord::viertel);
            break;

        case FrontWord::min_19:
            show(FrontWord::min_14);
            show(FrontWord::nach);
            show(FrontWord::viertel);
            break;

        case FrontWord::min_20:
            show(FrontWord::min_10);
            show(FrontWord::vor);
            show(FrontWord::halb);
            break;

        case FrontWord::min_21:
            show(FrontWord::min_9);
            show(FrontWord::vor);
            show(FrontWord::halb);
            break;

        case FrontWord::min_22:
            show(FrontWord::min_8);
            show(FrontWord::vor);
            show(FrontWord::halb);
            break;

        case FrontWord::min_23:
            show(FrontWord::min_7);
            show(FrontWord::vor);
            show(FrontWord::halb);
            break;

        case FrontWord::min_24:
            show(FrontWord::min_6);
            show(FrontWord::vor);
            show(FrontWord::halb);
            break;

        case FrontWord::min_25:
            show(FrontWord::min_5);
            show(FrontWord::vor);
            show(FrontWord::halb);
            break;

        case FrontWord::min_26:
            show(FrontWord::min_4);
            show(FrontWord::vor);
            show(FrontWord::halb);
            break;

        case FrontWord::min_27:
            show(FrontWord::min_3);
            show(FrontWord::vor);
            show(FrontWord::halb);
            break;

        case FrontWord::min_28:
            show(FrontWord::min_2);
            show(FrontWord::vor);
            show(FrontWord::halb);
            break;

        case FrontWord::min_29:
            show(FrontWord::min_1);
            show(FrontWord::vor);
            show(FrontWord::halb);
            break;

        case FrontWord::min_30:
            show(FrontWord::halb);
            break;

        case FrontWord::min_31:
            show(FrontWord::min_1);
            show(FrontWord::nach);
            show(FrontWord::halb);
            break;

        case FrontWord::min_32:
            show(FrontWord::min_2);
            show(FrontWord::nach);
            show(FrontWord::halb);
            break;

        case FrontWord::min_33:
            show(FrontWord::min_3);
            show(FrontWord::nach);
            show(FrontWord::halb);
            break;

        case FrontWord::min_34:
            show(FrontWord::min_4);
            show(FrontWord::nach);
            show(FrontWord::halb);
            break;

        case FrontWord::min_35:
            show(FrontWord::min_5);
            show(FrontWord::nach);
            show(FrontWord::halb);
            break;

        case FrontWord::min_36:
            show(FrontWord::min_6);
            show(FrontWord::nach);
            show(FrontWord::halb);
            break;

        case FrontWord::min_37:
            show(FrontWord::min_7);
            show(FrontWord::nach);
            show(FrontWord::halb);
            break;

        case FrontWord::min_38:
            show(FrontWord::min_8);
            show(FrontWord::nach);
            show(FrontWord::halb);
            break;

        case FrontWord::min_39:
            show(FrontWord::min_9);
            show(FrontWord::nach);
            show(FrontWord::halb);
            break;

        case FrontWord::min_40:
            show(FrontWord::min_5);
            show(FrontWord::vor);
            show(FrontWord::dreiviertel);
            break;

        case FrontWord::min_41:
            show(FrontWord::min_4);
            show(FrontWord::vor);
            show(FrontWord::dreiviertel);
            break;

        case FrontWord::min_42:
            show(FrontWord::min_3);
            show(FrontWord::vor);
            show(FrontWord::dreiviertel);
            break;

        case FrontWord::min_43:
            show(FrontWord::min_2);
            show(FrontWord::vor);
            show(FrontWord::dreiviertel);
            break;

        case FrontWord::min_44:
            show(FrontWord::min_1);
            show(FrontWord::vor);
            show(FrontWord::dreiviertel);
            break;

        case FrontWord::min_45:
            show(FrontWord::dreiviertel);
            break;

        case FrontWord::min_46:
            show(FrontWord::min_1);
            show(FrontWord::nach);
            show(FrontWord::dreiviertel);
            break;

        case FrontWord::min_47:
            show(FrontWord::min_2);
            show(FrontWord::nach);
            show(FrontWord::dreiviertel);
            break;

        case FrontWord::min_48:
            show(FrontWord::min_3);
            show(FrontWord::nach);
            show(FrontWord::dreiviertel);
                break;

        case FrontWord::min_49:
            show(FrontWord::min_4);
            show(FrontWord::nach);
            show(FrontWord::dreiviertel);
            break;

        case FrontWord::min_50:
            show(FrontWord::min_10);
            show(FrontWord::vor);
            break;

        case FrontWord::min_51:
            show(FrontWord::min_9);
            show(FrontWord::vor);
            break;

        case FrontWord::min_52:
            show(FrontWord::min_8);
            show(FrontWord::vor);
            break;

        case FrontWord::min_53:
            show(FrontWord::min_7);
            show(FrontWord::vor);
            break;

        case FrontWord::min_54:
            show(FrontWord::min_6);
            show(FrontWord::vor);
            break;

        case FrontWord::min_55:
            show(FrontWord::min_5);
            show(FrontWord::vor);
            break;

        case FrontWord::min_56:
            show(FrontWord::min_4);
            show(FrontWord::vor);
            break;

        case FrontWord::min_57:
            show(FrontWord::min_3);
            show(FrontWord::vor);
            break;

        case FrontWord::min_58:
            show(FrontWord::min_2);
            show(FrontWord::vor);
            break;

        case FrontWord::min_59:
            show(FrontWord::min_1);
            show(FrontWord::vor);
            break;

        // words
        case FrontWord::funk:
            setFrontMatrixWord(3, 3, 6);
            break;

        case FrontWord::minute:
        case FrontWord::minuten:
            if (_minute % 5 != 0) { // not every 5 min
                setFrontMatrixWord(4, 8, 10);
            }
            break;

        case FrontWord::vor:
        case FrontWord::v_vor:
            setFrontMatrixWord(4, 4, 6);
            break;

        case FrontWord::nach:
        case FrontWord::v_nach:
            setFrontMatrixWord(4, 0, 3);
            break;

        // quarters
        case FrontWord::viertel:
            setFrontMatrixWord(5, 0, 6);
            break;

        case FrontWord::halb:
            setFrontMatrixWord(6, 7, 10);
            break;

        case FrontWord::dreiviertel:
            setFrontMatrixWord(5, 0, 10);
            break;

        // hours
        case FrontWord::eins:
            setFrontMatrixWord(6, 0, 3);
            break;

        case FrontWord::hour_1:
            setFrontMatrixWord(6, 1, 3);
            break;

        case FrontWord::hour_2:
            setFrontMatrixWord(6, 2, 5);
            break;

        case FrontWord::hour_3:
            setFrontMatrixWord(8, 4, 5);
            setFrontMatrixWord(9, 4, 5);
            break;

        case FrontWord::hour_4:
            setFrontMatrixPixel(5, 6); // V
            setFrontMatrixPixel(6, 6); // I
            setFrontMatrixPixel(7, 6); // E
            setFrontMatrixPixel(8, 6); // R
            break;

        case FrontWord::hour_5:
            setFrontMatrixWord(8, 7, 10);
            break;

        case FrontWord::hour_6:
            setFrontMatrixWord(7, 0, 4);
            break;

        case FrontWord::hour_7:
            setFrontMatrixWord(7, 5, 10);
            break;

        case FrontWord::hour_8:
            setFrontMatrixWord(8, 0, 3);
            break;

        case FrontWord::hour_9:
            setFrontMatrixWord(9, 7, 10);
            break;

        case FrontWord::hour_10:
            setFrontMatrixWord(9, 0, 3);
            break;

        case FrontWord::hour_11:
            setFrontMatrixWord(10, 8, 10);
            break;

        case FrontWord::hour_0:
        case FrontWord::hour_12:
            setFrontMatrixWord(10, 3, 7);
            break;
        
        case FrontWord::uhr:
            if (_minute == 0) { // only at full hours
                setFrontMatrixWord(10, 0, 2);
            }
            break;

        default:
            break;
        };
    };
};

De11x11V4_t _de11x11V4;