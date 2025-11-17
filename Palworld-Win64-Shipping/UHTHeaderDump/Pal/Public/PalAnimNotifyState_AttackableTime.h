#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionResponse -FallbackName=ECollisionResponse
#include "Templates/SubclassOf.h"
#include "PalAnimNotifyState_AttackableTime.generated.h"

class APalCharacter;
class UPrimitiveComponent;

UCLASS(CollapseCategories, EditInlineNew)
class UPalAnimNotifyState_AttackableTime : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionResponse>> AttackResponseMap;
    
    UPROPERTY()
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionResponse>> BulletResponseMap;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bApplyChildActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOnlyApplyChildActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<APalCharacter>> ApplyChildActorClasses;
    
public:
    UPalAnimNotifyState_AttackableTime();

};

