#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDataTableRowName_CrimeMasterData.h"
#include "PalWorldSecurityLawBase.generated.h"

UCLASS()
class PAL_API UPalWorldSecurityLawBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_CrimeMasterData CrimeId;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool bInvalid;
    
    UPROPERTY(EditDefaultsOnly)
    float CrimeStateMaintainDurationBase;
    
    UPROPERTY(EditDefaultsOnly)
    bool bNotUseReleaseTimer;
    
public:
    UPalWorldSecurityLawBase();

};

