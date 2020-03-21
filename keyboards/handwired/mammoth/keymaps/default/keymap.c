#include QMK_KEYBOARD_H

#define C_T(K) LCTL_T(KC_ ## K)
#define S_T(K) LSFT_T(KC_ ## K)
#define A_T(K) LALT_T(KC_ ## K)
#define W_T(K) LGUI_T(KC_ ## K)

#define TR__   KC_TRNS
#define NO__   KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
  {
   LAYOUT(
	KC_Q     , KC_W      , KC_E     , KC_R    , KC_T     , KC_Y     , KC_U    , KC_I      , KC_O      , KC_P    ,
	KC_A     , KC_S      , KC_D     , KC_F    , KC_G     , KC_H     , KC_J    , KC_K      , KC_L      , KC_SCLN ,
	S_T(Z)   , KC_X      , KC_C     , KC_V    , KC_B     , KC_N     , KC_M    , KC_COMM   , KC_DOT    , KC_SLSH ,
	KC_HOME  , KC_PGDN , KC_PGUP   , A_T(END) , KC_A   , KC_LCTL  , KC_A  , RESET
	),
  /*  { */
  /* 	{ KC_TILD  , KC_EXLM , KC_AT     , KC_HASH  , KC_DLR  , KC_PERC  , KC_CIRC  , KC_AMPR , KC_ASTR   , KC_LPRN   , KC_RPRN , KC_DEL   }, */
  /* 	{ TR__     , NO__    , NO__      , NO__     , KC_TILD , KC_UNDS  , KC_PLUS  , KC_LCBR , KC_RCBR   , KC_PIPE   , TR__    , TR__     }, */
  /* 	{ TR__     , KC_F1   , KC_F2     , KC_F3    , KC_F4   , KC_F5    , KC_F6    , NO__    , TR__      , TR__      , TR__    , TR__     }, */
  /* 	{ TR__     , TR__    , TR__      , TR__     , TO(0)   , TR__     , TR__     , MO(3)   , TR__      , TR__      , TR__    , TR__     } */
  /*  }, */
  /*  { */
  /* 	{ KC_GRV   , KC_1    , KC_2      , KC_3     , KC_4    , KC_5     , KC_6     , KC_7    , KC_8      , KC_9      , KC_0    , KC_DEL   }, */
  /* 	{ TR__     , NO__    , NO__      , NO__     , KC_GRV  , KC_MINS  , KC_EQL   , KC_LBRC , KC_RBRC   , KC_BSLS   , TR__    , TR__     }, */
  /* 	{ TR__     , KC_F7   , KC_F8     , KC_F9    , KC_F10  , KC_F11   , KC_F11   , NO__    , TR__      , TR__      , TR__    , TR__     }, */
  /* 	{ TR__     , TR__    , TR__      , TR__     , MO(3)   , TR__     , TR__     , TO(0)   , TR__      , TR__      , TR__    , TR__     } */
  /*  }, */
  /*  { */
  /* 	{ RESET    , NO__    , NO__      , NO__     , NO__    , NO__     , NO__     , NO__    ,NO__       , NO__      , NO__    , NO__     }, */
  /* 	{ KC_VOLD  , KC_VOLU , KC_MUTE   , NO__     , NO__    , NO__     , NO__     , NO__    ,NO__       , NO__      , NO__    , NO__     }, */
  /* 	{ KC_BRID  , KC_BRIU , NO__      , NO__     , NO__    , NO__     , NO__     , NO__    ,NO__       , NO__      , NO__    , NO__     }, */
  /* 	{ NO__     , NO__    , NO__      , NO__     , NO__    , NO__     , NO__     , NO__    ,NO__       , NO__      , NO__    , NO__     }, */
  /*  }, */
  };
