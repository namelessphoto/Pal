#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalItemAndNum.h"
#include "PalBaseCampModuleTransportItemCharacterInfo.generated.h"

USTRUCT()
struct FPalBaseCampModuleTransportItemCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    TArray<FPalItemAndNum> ItemInfos;
    
    UPROPERTY(VisibleInstanceOnly)
    FVector CharacterLocation;
    
    PAL_API FPalBaseCampModuleTransportItemCharacterInfo();
};

