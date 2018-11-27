#pragma once
#ifndef __CollisionManager__
#define __CollisionManager__

// Core Libraries
#include <iostream>


#include "GameObject.h"
#include <GLM/gtx/norm.hpp>

class CollisionManager {
public:
	static bool check(GameObject* object1, GameObject* object2);
};

#endif /* defined (__CollisionManager__) */