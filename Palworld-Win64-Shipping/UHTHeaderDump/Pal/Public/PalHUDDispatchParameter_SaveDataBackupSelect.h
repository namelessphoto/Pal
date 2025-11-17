#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_SaveDataBackupSelect.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_SaveDataBackupSelect : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString WorldDirectoryName;
    
    UPalHUDDispatchParameter_SaveDataBackupSelect();

};

