#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "ComposureGameSettings.generated.h"

class UTexture;

UCLASS(BlueprintType, Config=Game)
class UComposureGameSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config)
    FSoftObjectPath StaticVideoPlateDebugImage;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool bSceneCapWarnOfMissingCam;
    
    UPROPERTY(BlueprintReadOnly, Config)
    FSoftObjectPath FallbackCompositingTexture;
    
private:
    UPROPERTY(Transient)
    UTexture* FallbackCompositingTextureObj;
    
public:
    UComposureGameSettings();

};

