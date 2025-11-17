#pragma once
#include "CoreMinimal.h"
#include "PalWorldSubsystem.h"
#include "PalDimensionLockerControlSubsystem.generated.h"

class UPalDimensionLockerControl;

UCLASS()
class PAL_API UPalDimensionLockerControlSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UPalDimensionLockerControl*> DimensionLockerControls;
    
public:
    UPalDimensionLockerControlSubsystem();

protected:
    UFUNCTION()
    void OnSavedLockerData(UPalDimensionLockerControl* LockerControl);
    
};

