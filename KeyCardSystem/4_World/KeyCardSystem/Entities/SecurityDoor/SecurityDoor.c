class KeyCard_Door_Base : Building 
{
    void Open( int index );
    void InitiateClose( int index );
    void Close( int index );
};

class Land_KlimaX_T1Door : KeyCard_Door_Base {};
class Land_KlimaX_T2Door : KeyCard_Door_Base {};
class Land_KlimaX_T3Door : KeyCard_Door_Base {};

