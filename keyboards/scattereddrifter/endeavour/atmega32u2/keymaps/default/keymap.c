/* Derivate of elmo's firmware >>kb-elmo<mail@elmo.space>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

/* ENDEAVOUR
   *  ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
   *  │ Q  │ W  │ E  │ R  │ T  │ Y  │ U  │ I  │ O  │ P  │
   *  ├────┼────┼────┼────┼────┤────┼────┼────┼────┼────┤
   *  │ A  │ S  │ D  │ F  │ G  │ H  │ L  │ K  │ L  │ ;  │
   *  ├────┼────┼────┼────┼────┤────┼────┼────┼────┼────┤
   *  │ Z  │ X  │ C  │ V  │ B  │ N  │ M  │ ,  │ .  │ /  │
      ├────┼────┼────┼────┼────┤────┼────┼────┼────┼────┤
   *  │ctrl│MO1 │ GUI│ Spc│MCR │Bksp│Ralt│Mo1 │GUI │ctrl│
   *  └────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
   */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
            
        KC_NO,    KC_NO,    KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, 
	KC_NO,    KC_NO,    KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
	
        ),
   [1] = LAYOUT(
            
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, 
	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
	
        ),
  [2] = LAYOUT(
            
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, 
	KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
	
        ),
};
