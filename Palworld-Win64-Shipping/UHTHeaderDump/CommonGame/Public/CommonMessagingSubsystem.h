#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
#include "CommonMessagingSubsystem.generated.h"

UCLASS(Config=Game)
class COMMONGAME_API UCommonMessagingSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UCommonMessagingSubsystem();

};

