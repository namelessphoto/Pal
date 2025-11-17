#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalUserAchievementChecker.generated.h"

UCLASS()
class UPalUserAchievementChecker : public UObject {
    GENERATED_BODY()
public:
    UPalUserAchievementChecker();

private:
    UFUNCTION()
    void OnUpdatePalCaptureCount(FName Key, int32 NewValue);
    
};

