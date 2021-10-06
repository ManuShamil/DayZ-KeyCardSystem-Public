class LootSpawnControllerBase
{
	private ref static LootSpawnControllerBase m_Instance;

	void LootSpawnControllerBase()
	{
		m_Instance = this;
	}

	static LootSpawnControllerBase GetInstance()
	{
		return m_Instance;
	}

	void T1Door( EntityAI crate );
	void T2Door( EntityAI crate );
	void T3Door( EntityAI crate );
}