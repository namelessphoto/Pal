#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalBuildObjectTypeA.h"
#include "PalBuildObjectData.h"
#include "PalBuildObjectDataSetTypeB.h"
#include "PalBuildObjectDataMap.generated.h"

UCLASS(BlueprintType)
class UPalBuildObjectDataMap : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<FName, FPalBuildObjectData> BuildObjectDataIdMap;
    
    UPROPERTY(Transient)
    TMap<FName, FName> BlueprintItemIdToBuildObjectIdMap;
    
public:
    UPalBuildObjectDataMap();

    UFUNCTION(BlueprintPure)
    FPalBuildObjectData GetByMapObjectId(const FName MapObjectId) const;
    
    UFUNCTION(BlueprintPure)
    FPalBuildObjectData GetById(const FName ID) const;
    
    UFUNCTION(BlueprintPure)
    void GetBuildObjectDataMapForType(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectData>& OutArray) const;
    
    UFUNCTION(BlueprintPure)
    void GetBuildObjectDataArrayForTypeAByTypeB(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectDataSetTypeB>& OutArray) const;
    
};

