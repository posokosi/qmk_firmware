/*
Copyright 2011,2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include "quantum.h"

#define XXX KC_NO

/* IBM XT keyboard layout
 * ,-------.  ,--------------------------------------------------------------------------.
 * | F1| F2|  |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  BS  |NumLck |ScrLck |
 * |-------|  |--------------------------------------------------------------------------|
 * | F3| F4|  | Tab |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ] |   |  7|  8|  9|  -|
 * |-------|  |------------------------------------------------------|Ent|---------------|
 * | F5| F6|  | Ctrl |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  `|   |  4|  5|  6|   |
 * |-------|  |----------------------------------------------------------------------|   |
 * | F7| F8|  |Shif|  \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift|  *|  1|  2|  3|  +|
 * |-------|  |----------------------------------------------------------------------|   |
 * | F9|F10|  |  Alt  |               Space                  |CapsLck|   0   |   .   |   |
 * `-------'  `--------------------------------------------------------------------------'
 * Scan code set 1
 * ,-------.  ,--------------------------------------------------------------------------.
 * | 3B| 3C|  | 01| 02| 03| 04| 05| 06| 07| 08| 09| 0A| 0B| 0C| 0D|  0E  |  45   |  46   |
 * |-------|  |--------------------------------------------------------------------------|
 * | 3D| 3E|  | 0F  | 10| 11| 12| 13| 14| 15| 16| 17| 18| 19| 1A| 1B |   | 47| 48| 49| 4A|
 * |-------|  |------------------------------------------------------| 1C|---------------|
 * | 3F| 40|  | 1D   | 1E| 1F| 20| 21| 22| 23| 24| 25| 26| 27| 28| 29|   | 4B| 4C| 4D|   |
 * |-------|  |----------------------------------------------------------------------|   |
 * | 41| 42|  | 2A | 2B| 2C| 2D| 2E| 2F| 30| 31| 32| 33| 34| 35|  36 | 37| 4F| 50| 51| 4E|
 * |-------|  |----------------------------------------------------------------------|   |
 * | 43| 44|  |  38   |              39                      |  3A   |  52   |  53   |   |
 * `-------'  `--------------------------------------------------------------------------'
 */
#define LAYOUT_xt( \
    k3B, k3C,   k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, k45,      k46, \
    k3D, k3E,   k0F, k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B,      k47, k48, k49, k4A, \
    k3F, k40,   k1D, k1E, k1F, k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k1C, k4B, k4C, k4D, \
    k41, k42,   k2A, k2B, k2C, k2D, k2E, k2F, k30, k31, k32, k33, k34, k35, k36, k37, k4F, k50, k51, k4E, \
    k43, k44,   k38,                          k39,                     k3A,      k52,      k53 \
) { \
    { XXX, k01, k02, k03, k04, k05, k06, k07 }, \
    { k08, k09, k0A, k0B, k0C, k0D, k0E, k0F }, \
    { k10, k11, k12, k13, k14, k15, k16, k17 }, \
    { k18, k19, k1A, k1B, k1C, k1D, k1E, k1F }, \
    { k20, k21, k22, k23, k24, k25, k26, k27 }, \
    { k28, k29, k2A, k2B, k2C, k2D, k2E, k2F }, \
    { k30, k31, k32, k33, k34, k35, k36, k37 }, \
    { k38, k39, k3A, k3B, k3C, k3D, k3E, k3F }, \
    { k40, k41, k42, k43, k44, k45, k46, k47 }, \
    { k48, k49, k4A, k4B, k4C, k4D, k4E, k4F }, \
    { k50, k51, k52, k53, XXX, XXX, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX } \
}

/* Extended keyboard layout
 *         ,-----------------------------------------------.
 *         |F13|F14|F15|F16|F17|F18|F19|F20|F21|F22|F23|F24|
 * ,---.   |-----------------------------------------------|     ,-----------.     ,-----------.
 * |Esc|   |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|     |PrS|ScL|Pau|     |VDn|VUp|Mut|
 * `---'   `-----------------------------------------------'     `-----------'     `-----------'
 * ,-----------------------------------------------------------. ,-----------. ,---------------.
 * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|JPY|Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -|
 * |-----------------------------------------------------------| |-----------| |---------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD| |  7|  8|  9|  +|
 * |-----------------------------------------------------------| `-----------' |---------------|
 * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  #|Entr|               |  4|  5|  6|KP,|
 * |-----------------------------------------------------------|     ,---.     |---------------|
 * |Shft|  <|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RO|Shift |     |Up |     |  1|  2|  3|Ent|
 * |-----------------------------------------------------------| ,-----------. |---------------|
 * |Ctl|Gui|Alt|MHEN|     Space      |HENK|KANA|Alt|Gui|App|Ctl| |Lef|Dow|Rig| |      0|  .|KP=|
 * `-----------------------------------------------------------' `-----------' `---------------'
 *         ,-----------------------------------------------.
 *         | 64| 65| 66| 67| 68| 69| 6A| 6B| 6C| 6D| 6E| 76|
 * ,---.   |-----------------------------------------------|     ,-----------.     ,-----------.
 * | 01|   | 3B| 3C| 3D| 3E| 3F| 40| 41| 42| 43| 44| 57| 58|     |*37| 46|*45|     |e5E|e5F|e63|
 * `---'   `-----------------------------------------------'     `-----------'     `-----------'
 * ,-----------------------------------------------------------. ,-----------. ,---------------.
 * | 29| 02| 03| 04| 05| 06| 07| 08| 09| 0A| 0B| 0C| 0D| 7D| 0E| |e52|e47|e49| | 45|e35| 37| 4A|
 * |-----------------------------------------------------------| |-----------| |---------------|
 * | 0F  | 10| 11| 12| 13| 14| 15| 16| 17| 18| 19| 1A| 1B|  2B | |e53|e4F|e51| | 47| 48| 49| 4E|
 * |-----------------------------------------------------------| `-----------' |---------------|
 * |  3A  | 1E| 1F| 20| 21| 22| 23| 24| 25| 26| 27| 28| 00| 1C |               | 4B| 4C| 4D| 7E|
 * |-----------------------------------------------------------|     ,---.     |---------------|
 * | 2A | 56| 2C| 2D| 2E| 2F| 30| 31| 32| 33| 34| 35| 73|  36  |     |e48|     | 4F| 50| 51|e1C|
 * |-----------------------------------------------------------| ,-----------. |---------------|
 * | 1D|e5B| 38| 7B |       39       | 79 | 70 |e38|e5C|e5D|e1D| |e4B|e50|e4D| |     52| 53| 59|
 * `-----------------------------------------------------------' `-----------' `---------------'
 * e: E0-escaped codes
 * *: special handling codes
 */
#define LAYOUT( \
              k64, k65, k66, k67, k68, k69, k6A, k6B, k6C, k6D, k6E, k76, \
    k01,      k3B, k3C, k3D, k3E, k3F, k40, k41, k42, k43, k44, k57, k58,        k54, k46, k55,        k5D, k5E, k5F, \
    k29, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k7D, k0E,   k71, k74, k77,   k45, k7F, k37, k4A, \
    k0F, k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k2B,        k72, k75, k78,   k47, k48, k49, k4E, \
    k3A, k1E, k1F, k20, k21, k22, k23, k24, k25, k26, k27, k28, k00, k1C,                         k4B, k4C, k4D, k7E, \
    k2A, k56, k2C, k2D, k2E, k2F, k30, k31, k32, k33, k34, k35, k73, k36,             k60,        k4F, k50, k51, k6F, \
    k1D, k5A, k38, k7B,           k39,      k79, k70, k7C, k5B, k5C, k7A,        k61, k62, k63,   k52,      k53, k59 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07 }, \
    { k08, k09, k0A, k0B, k0C, k0D, k0E, k0F }, \
    { k10, k11, k12, k13, k14, k15, k16, k17 }, \
    { k18, k19, k1A, k1B, k1C, k1D, k1E, k1F }, \
    { k20, k21, k22, k23, k24, k25, k26, k27 }, \
    { k28, k29, k2A, k2B, k2C, k2D, k2E, k2F }, \
    { k30, k31, k32, k33, k34, k35, k36, k37 }, \
    { k38, k39, k3A, k3B, k3C, k3D, k3E, k3F }, \
    { k40, k41, k42, k43, k44, k45, k46, k47 }, \
    { k48, k49, k4A, k4B, k4C, k4D, k4E, k4F }, \
    { k50, k51, k52, k53, k54, k55, k56, k57 }, \
    { k58, k59, k5A, k5B, k5C, k5D, k5E, k5F }, \
    { k60, k61, k62, k63, k64, k65, k66, k67 }, \
    { k68, k69, k6A, k6B, k6C, k6D, k6E, k6F }, \
    { k70, k71, k72, k73, k74, k75, k76, k77 }, \
    { k78, k79, k7A, k7B, k7C, k7D, k7E, k7F } \
}
