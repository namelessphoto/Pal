#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalDataTableRowName_MapObjectData.h"
#include "PalEditorMapObjectCheckPlacer.generated.h"

class UArrowComponent;

UCLASS()
class PAL_API APalEditorMapObjectCheckPlacer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UArrowComponent* LeftEdgeArrow;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UArrowComponent* RightEdgeArrow;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UArrowComponent* StackRowArrow;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D PlacementMargin;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalDataTableRowName_MapObjectData> IgnoreRowNames;
    
public:
    APalEditorMapObjectCheckPlacer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlaceMapObjects();
    
};

