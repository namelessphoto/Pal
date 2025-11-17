#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalDataTableRowName_MapObjectData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CountBuild.generated.h"

class UPalMapObjectModel;

UCLASS()
class PAL_API UPalQuestBlock_CountBuild : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_MapObjectData RequireBuildObjectName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequireBuildCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NowBuildCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NowBlueprintCount;
    
private:
    UPROPERTY()
    TArray<TWeakObjectPtr<UPalMapObjectModel>> CheckMapObjectModels;
    
    UPROPERTY()
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_CountBuild();

private:
    UFUNCTION()
    void OnTimer_CheckMapObject();
    
    UFUNCTION()
    void OnRepMapObjectModel_Client(UPalMapObjectModel* MapObjectModel);
    
    UFUNCTION()
    void OnAddedMapObjectModel_Server(UPalMapObjectModel* MapObjectModel, const FVector& Vector);
    
};

