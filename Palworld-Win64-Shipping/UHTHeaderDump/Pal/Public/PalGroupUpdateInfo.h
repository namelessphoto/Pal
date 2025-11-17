#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalInstanceID.h"
#include "PalGroupUpdateInfo.generated.h"

USTRUCT()
struct FPalGroupUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid EnterGroupId;
    
    UPROPERTY()
    FGuid ExitGroupId;
    
    UPROPERTY()
    TArray<FGuid> PlayerUIds;
    
    UPROPERTY()
    TArray<FPalInstanceID> CharacterIndividualIds;
    
    UPROPERTY()
    TArray<FGuid> MapObjectInstanceIds_BaseCampPoint;
    
    UPROPERTY()
    TArray<FGuid> BaseCampIds;
    
    PAL_API FPalGroupUpdateInfo();
};

