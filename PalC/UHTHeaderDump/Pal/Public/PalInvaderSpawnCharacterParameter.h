#pragma once
#include "CoreMinimal.h"
#include "PalInvaderSpawnCharacterParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalInvaderSpawnCharacterParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName CharacterID;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly)
    FName Otomo;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsVisitorLeader;
    
    PAL_API FPalInvaderSpawnCharacterParameter();
};

