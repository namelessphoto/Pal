#pragma once
#include "CoreMinimal.h"
#include "PalUIPalCaptureInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIPalCaptureInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName CharacterID;
    
    UPROPERTY(BlueprintReadOnly)
    FName UniqueNPCID;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CaptureCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> PassiveSkillNameList;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsRarePal;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsUnlockedPaldeck;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsCompleteCaptureBonus;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Exp;
    
    PAL_API FPalUIPalCaptureInfo();
};

