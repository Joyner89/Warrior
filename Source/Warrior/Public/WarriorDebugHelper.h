//Ws Study

#pragma once

// 命名空间
namespace Debug
{
	// 静态函数,全局可以调用,在屏幕上和Log中同时打印相同的调试信息
	static void Print(const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), int32 InKey = -1)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(InKey,7.f,Color,Msg);

			UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg);
		}
	}
}
