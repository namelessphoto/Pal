#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalBaseCampWorkDirectorBattleDefenseModelStashInfo.h"
#include "PalBaseCampWorkerDirectorBattle.generated.h"

UCLASS()
class PAL_API UPalBaseCampWorkerDirectorBattle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalBaseCampWorkDirectorBattleDefenseModelStashInfo> CannotMoveToDefenseModelInfoMap;
    
public:
    UPalBaseCampWorkerDirectorBattle();

};

