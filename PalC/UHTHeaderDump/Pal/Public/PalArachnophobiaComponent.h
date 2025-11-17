#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
#include "FixedPoint64.h"
#include "PalOptionGraphicsSettings.h"
#include "PalArachnophobiaComponent.generated.h"

class APalCharacter;
class UTexture2D;

UCLASS(CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalArachnophobiaComponent : public UBillboardComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<UTexture2D*> RandomSprite;
    
    UPROPERTY(Transient)
    FVector DefaultScale;
    
public:
    UPalArachnophobiaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void UpdateArachnophobiaVisible();
    
    UFUNCTION()
    void OnUpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    
    UFUNCTION()
    void OnInitCharcter(APalCharacter* InCharacter);
    
    UFUNCTION()
    void OnChangeGraphicsDelegate(const FPalOptionGraphicsSettings& PrevSettings, const FPalOptionGraphicsSettings& NewSettings);
    
};

