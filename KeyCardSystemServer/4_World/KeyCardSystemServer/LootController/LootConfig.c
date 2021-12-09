// class SecurityDoorLootSubDefinition
// {
//     ref array< string > classNames; //! List of items in this definition

//     int lootMinCount;
//     int lootMaxCount;

//     void SecurityDoorLootSubDefinition()
//     {
//         classNames = new array< string >();

//         lootMaxCount = 1;
//         lootMinCount = 0;
//     }
// }

// class SecurityDoorLootDefinition
// {
//     ref array< ref SecurityDoorLootSubDefinition > subDefinitions; 
//     ref array< ref SecurityDoorWeaponsDefinition > weapons;

//     void SecurityDoorLootDefinition()
//     {
//         subDefinitions = new array< ref SecurityDoorLootSubDefinition >();
//         weapons = new array< ref SecurityDoorWeaponsDefinition >();

//     }

// }

// class SecurityDoorWeaponAttachmentEntry
// {
//     string className;
//     float chance;

//     ref array<ref SecurityDoorWeaponAttachmentEntry> subAttachments;

//     void SecurityDoorWeaponAttachmentEntry( int class_name, int _chance )
//     {
//         className = class_name;
//         chance = _chance;

//         subAttachments = new array<ref SecurityDoorWeaponAttachmentEntry>();
//     }

//     void AddAttachment( ref SecurityDoorWeaponAttachmentEntry attachment )
//     {
//         subAttachments.Insert( attachment );
//     }
// }

// class SecurityDoorWeaponEntry
// {
//     string className;
//     ref array<ref SecurityDoorWeaponAttachmentEntry> weaponAttachments;

//     void SecurityDoorWeaponEntry()
//     {
//         weaponAttachments = new array< ref SecurityDoorWeaponAttachmentEntry >();
//     }

//     void AddAttachment( ref SecurityDoorWeaponAttachmentEntry attachment )
//     {
//         weaponAttachments.Insert( attachment );
//     }
// }

// class SecurityDoorWeaponsDefinition
// {
//     ref array< ref SecurityDoorWeaponEntry> weapons;

//     int minWeaponsCount;
//     int maxWeaponsCount;

//     void SecurityDoorWeaponsDefinition( int minCount, int maxCount )
//     {
//         weapons = new array< ref SecurityDoorWeaponEntry >();

//         minWeaponsCount = minCount;
//         maxWeaponsCount = maxCount;
//     }

//     void AddWeapon( ref SecurityDoorWeaponEntry weapon)
//     {
//         weapons.Insert( weapon );
//     }

// }

// class SecurityDoorLootConfig
// {
//     ref map< string, ref array<ref SecurityDoorLootDefinition > > lootDefinitions;

//     void SecurityDoorLootConfig()
//     {
//         lootDefinitions = new map< string, ref array<ref SecurityDoorLootDefinition > >();

//     }
// }