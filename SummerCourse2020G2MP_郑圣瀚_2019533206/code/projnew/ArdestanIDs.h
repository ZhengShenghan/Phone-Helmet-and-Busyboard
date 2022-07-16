#ifndef __ARDESTAN_SYM_IDS__
#define __ARDESTAN_SYM_IDS__

enum ARSymID: int32_t
{
    ID_INVALID_SYMBOL=-1,
    ID_BANG=0,
    ID_A,
    ID_ANYTHING,
    ID_B,
    ID_DISABLE_LOOP,
    ID_ENABLE_LOOP,
    ID_F,
    ID_FLOAT,
    ID_HIGH,
    ID_I,
    ID_INT,
    ID_LOADBANG,
    ID_LOW,
    ID_NEXT,
    ID_PAUSE,
    ID_POLL,
    ID_PREVIOUS,
    ID_S,
    ID_START,
    ID_STRING,
    ID_SYMBOL,
    ID_TIMER_CALLBACK,
    ID_VOLUME_DOWN,
    ID_VOLUME_UP,
};

#define MAX_ARSYMID ARSymID::ID_VOLUME_UP

#endif
