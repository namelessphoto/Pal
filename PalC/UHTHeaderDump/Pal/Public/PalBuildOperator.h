#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BuildingSurfaceMaterialSet.h"
#include "PalBuildOperator.generated.h"

class UDataTable;
class UPalBuildObjectDataMap;
class UPalMapObjectModel;

UCLASS(BlueprintType)
class UPalBuildOperator : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectModelDynamicDelegate, UPalMapObjectModel*, MapObjectModel);
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectModelDynamicDelegate OnCompleteBuildInServerDelegate;
    
protected:
    UPROPERTY(Transient)
    FBuildingSurfaceMaterialSet BuildingSurfaceMaterialSet;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalBuildObjectDataMap* DataMap;
    
public:
    UPalBuildOperator();

    UFUNCTION(BlueprintCallable)
    void Editor_ResetDataTable(UDataTable* InBuildObjectDataTable, UDataTable* InBuildObjectNameTable, UDataTable* InBuildObjectDescTable);
    
};

