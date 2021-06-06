#pragma once
#include "document.h"

namespace Horizon
{
	class GameObject;
}

class Coily final 
{
public:
	Coily(const rapidjson::Value& jsonObject);
	Coily(const Horizon::IPoint2& spawnPos);
	Horizon::GameObject* GetGameObject() const;
private:
	void Initialize();

	const Horizon::IPoint2& m_SpawnPos;
	const rapidjson::Value& m_Value;
	Horizon::GameObject* m_pGameObject = nullptr;
};

