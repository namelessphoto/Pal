#pragma once
#include "CoreMinimal.h"
#include "ERetargetRotationMode.h"
#include "ERetargetTranslationMode.h"
#include "TargetChainFKSettings.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FTargetChainFKSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableFK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERetargetRotationMode RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERetargetTranslationMode TranslationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TranslationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PoleVectorMatching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PoleVectorOffset;
    
    FTargetChainFKSettings();
};

