class SecurityDoorPersistanceData {
    string className;
    vector location;
    vector dir;
    vector crateLocation;
    vector crateDir;

    float autoClose;
    float closeDelay;

    ref map<int, bool> m_DoorState;
	ref map<int, float> m_DoorTimers;

    ref array< ref SecurityDoorRandomRewardConfig > randomRewards;
    ref array< ref SecurityDoorRewardConfig > fixedRewards;

    void SecurityDoorPersistanceData() {
        m_DoorState = new map<int, bool>;
		m_DoorTimers = new map<int, float>;

        randomRewards = new array< ref SecurityDoorRandomRewardConfig >;
        fixedRewards = new array< ref SecurityDoorRewardConfig >;
    }

    string GetType() {
        return className;
    }

    vector GetPosition() {
        return location;
    }

    vector GetOrientation() {
        return dir;
    }

    vector GetCratePosition() {
        return crateLocation;
    }

    vector GetCrateOrientation()
    {
        return crateDir;
    }

    float GetAutoCloseTime() 
    {
        return autoClose;
    }

    float GetCloseDelay()
    {
        return closeDelay;
    }

    bool IsOpen( int index ) {
        return m_DoorState[ index ];
    }

    void SetType( string ClassName ) {
        className = ClassName;
    }

    void SetPosition( vector Location ) {
        location = Location;
    }

    void SetOrientation( vector Orientation) {
        dir = Orientation;
    }

    void SetIsOpen( int index, bool state ) {
        m_DoorState[ index ] = state;
    }

    void SetAutoCloseTime( float AutoCloseTime ) {
        autoClose = AutoCloseTime;
    }

    void SetCratePosition( vector Location) {
        crateLocation = Location;
    }

    void SetCrateOrientation( vector Direction ) {
        crateDir = Direction;
    }

    void SetCloseDelay( float amount )
    {
        closeDelay = amount;
    }

    void SetRandomRewards(array< ref SecurityDoorRandomRewardConfig > rewards)
    {
        randomRewards = rewards;
    }

    void SetFixedRewards( array< ref SecurityDoorRewardConfig > rewards )
    {
        fixedRewards = rewards;
    }

}
