#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SignificanceManager -ObjectName=SignificanceManager -FallbackName=SignificanceManager
#include "PalSignificanceManager.generated.h"

class UObject;
class UPalSignificanceUpdaterBase;

UCLASS(Config=Game)
class PAL_API UPalSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPalSignificanceUpdaterBase* MapObjectUpdater;
    
    UPROPERTY(Transient)
    TArray<UObject*> UnregisterCachedObjects;
    
public:
    UPalSignificanceManager();

};

