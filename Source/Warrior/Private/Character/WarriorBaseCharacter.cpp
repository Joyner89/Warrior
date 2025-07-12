// Ws Study


#include "Warrior/Public/Character/WarriorBaseCharacter.h"

// Sets default values
AWarriorBaseCharacter::AWarriorBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	// 开始的时候启用Tick事件
	PrimaryActorTick.bStartWithTickEnabled = false;

	// 将mesh设置为不能接受贴图
	GetMesh()->bReceivesDecals = false;
	
}

