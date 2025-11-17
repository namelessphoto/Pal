#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
#include "RigMirrorSettings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigMirrorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAxis> MirrorAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAxis> AxisToFlip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SearchString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ReplaceString;
    
    FRigMirrorSettings();
};

