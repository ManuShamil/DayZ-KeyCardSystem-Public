class KeyCardLootSpawnManager
{
    private ref static KeyCardLootSpawnManager	    m_Instance;

    void KeyCardLootSpawnManager()
    {
        m_Instance = this;
    }

    static KeyCardLootSpawnManager GetInstance()
	{
		return m_Instance;
	}
}