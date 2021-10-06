class KeyCardLootSpawnControllerBase
{
	private ref static KeyCardLootSpawnControllerBase m_Instance;

	void KeyCardLootSpawnControllerBase()
	{
		m_Instance = this;
	}

	static KeyCardLootSpawnControllerBase GetInstance()
	{
		return m_Instance;
	}

	void T1Door( EntityAI crate );
	void T2Door( EntityAI crate );
	void T3Door( EntityAI crate );
}