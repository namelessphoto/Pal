#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ControlRigPoseMirrorSettings.generated.h"

UCLASS(BlueprintType, Config=EditorPerProjectUserSettings)
class CONTROLRIG_API UControlRigPoseMirrorSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString RightSide;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString LeftSide;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TEnumAsByte<EAxis> MirrorAxis;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TEnumAsByte<EAxis> AxisToFlip;
    
    UControlRigPoseMirrorSettings();

};

