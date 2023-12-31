/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_
#include "enums.pb.h"

#define BOARD_CONFIG_LABEL "KB2040"

// Main pin mapping Configuration
//                          // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define PIN_DPAD_UP     27  // UP     | UP     | UP      | UP       | UP     | UP     |
#define PIN_DPAD_DOWN   29  // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   | 
#define PIN_DPAD_RIGHT  28  // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  | 
#define PIN_DPAD_LEFT   26  // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   | 
#define PIN_BUTTON_B1   3   // B1     | A      | B       | Cross    | 2      | K1     |
#define PIN_BUTTON_B2   2   // B2     | B      | A       | Circle   | 3      | K2     |
#define PIN_BUTTON_R2   8   // R2     | RT     | ZR      | R2       | 8      | K3     |
#define PIN_BUTTON_L2   9   // L2     | LT     | ZL      | L2       | 7      | K4     |
#define PIN_BUTTON_B3   5   // B3     | X      | Y       | Square   | 1      | P1     |
#define PIN_BUTTON_B4   4   // B4     | Y      | X       | Triangle | 4      | P2     |
#define PIN_BUTTON_R1   10  // R1     | RB     | R       | R1       | 6      | P3     |
#define PIN_BUTTON_L1   19  // L1     | LB     | L       | L1       | 5      | P4     |
#define PIN_BUTTON_S1   20  // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define PIN_BUTTON_S2   18  // S2     | Start  | Plus    | Start    | 10     | Start  |
#define PIN_BUTTON_L3   13  // L3     | LS     | LS      | L3       | 11     | LS     |
#define PIN_BUTTON_R3   12  // R3     | RS     | RS      | R3       | 12     | RS     |
#define PIN_BUTTON_A1   0   // A1     | Guide  | Home    | PS       | 13     | ~      |
#define PIN_BUTTON_A2   1   // A2     | ~      | Capture | ~        | 14     | ~      |
#define PIN_BUTTON_FN   -1  // Hotkey Function                                        |

// Keyboard Mapping Configuration
//                                            // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define KEY_DPAD_UP     HID_KEY_ARROW_UP      // UP     | UP     | UP      | UP       | UP     | UP     |
#define KEY_DPAD_DOWN   HID_KEY_ARROW_DOWN    // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   | 
#define KEY_DPAD_RIGHT  HID_KEY_ARROW_RIGHT   // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  | 
#define KEY_DPAD_LEFT   HID_KEY_ARROW_LEFT    // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   | 
#define KEY_BUTTON_B1   HID_KEY_SHIFT_LEFT    // B1     | A      | B       | Cross    | 2      | K1     |
#define KEY_BUTTON_B2   HID_KEY_Z             // B2     | B      | A       | Circle   | 3      | K2     |
#define KEY_BUTTON_R2   HID_KEY_X             // R2     | RT     | ZR      | R2       | 8      | K3     |
#define KEY_BUTTON_L2   HID_KEY_V             // L2     | LT     | ZL      | L2       | 7      | K4     |
#define KEY_BUTTON_B3   HID_KEY_CONTROL_LEFT  // B3     | X      | Y       | Square   | 1      | P1     |
#define KEY_BUTTON_B4   HID_KEY_ALT_LEFT      // B4     | Y      | X       | Triangle | 4      | P2     |
#define KEY_BUTTON_R1   HID_KEY_SPACE         // R1     | RB     | R       | R1       | 6      | P3     |
#define KEY_BUTTON_L1   HID_KEY_C             // L1     | LB     | L       | L1       | 5      | P4     |
#define KEY_BUTTON_S1   HID_KEY_5             // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define KEY_BUTTON_S2   HID_KEY_1             // S2     | Start  | Plus    | Start    | 10     | Start  |
#define KEY_BUTTON_L3   HID_KEY_EQUAL         // L3     | LS     | LS      | L3       | 11     | LS     |
#define KEY_BUTTON_R3   HID_KEY_MINUS         // R3     | RS     | RS      | R3       | 12     | RS     |
#define KEY_BUTTON_A1   HID_KEY_9             // A1     | Guide  | Home    | PS       | 13     | ~      |
#define KEY_BUTTON_A2   HID_KEY_F2            // A2     | ~      | Capture | ~        | 14     | ~      |
#define KEY_BUTTON_FN   -1                    // Hotkey Function                                        |

#define JSLIDER_ENABLED 1
#define PIN_SLIDER_ONE  6
#define PIN_SLIDER_TWO  7

#define BOARD_LEDS_PIN 17

#define LED_BRIGHTNESS_MAXIMUM 50
#define LED_BRIGHTNESS_STEPS 5
#define LED_FORMAT LED_FORMAT_GRB
#define LEDS_PER_PIXEL 1

#endif