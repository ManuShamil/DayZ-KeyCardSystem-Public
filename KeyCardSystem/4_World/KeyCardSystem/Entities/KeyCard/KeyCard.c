class KeyCard_Base : ItemBase {
    bool CanAuthorizeDoor( string type ) {
        return false;
    }
};

class RedemptionKeyCard_01 : KeyCard_Base {
    override bool CanAuthorizeDoor( string type ) {
        return type == "Land_KlimaX_T1Door";
    }
};
class RedemptionKeyCard_02 : KeyCard_Base {
    override bool CanAuthorizeDoor( string type ) {
        return type == "Land_KlimaX_T2Door";
    }
};
class RedemptionKeyCard_03 : KeyCard_Base {
    override bool CanAuthorizeDoor( string type ) {
        return type == "Land_KlimaX_T3Door";
    }
};