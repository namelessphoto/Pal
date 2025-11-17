#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalArenaDefine.generated.h"

UCLASS(BlueprintType)
class UPalArenaDefine : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalArenaDefine();

    UFUNCTION(BlueprintPure)
    static FGuid OutsiderPlayerUid();
    
    UFUNCTION(BlueprintPure)
    static int32 ArenaPlayerMax();
    
    UFUNCTION(BlueprintPure)
    static int32 ArenaPartyPalMax();
    
    UFUNCTION(BlueprintPure)
    static FName ArenaOutBattleFlag();
    
};

