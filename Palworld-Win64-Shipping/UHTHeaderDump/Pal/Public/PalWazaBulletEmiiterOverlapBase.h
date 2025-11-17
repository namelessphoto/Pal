#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalWazaBulletEmiiterOverlapSphere.h"
#include "PalWazaBulletEmiiterOverlapBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalWazaBulletEmiiterOverlapBase : public UObject {
    GENERATED_BODY()
public:
    UPalWazaBulletEmiiterOverlapBase();

    UFUNCTION(BlueprintCallable)
    bool IsOverlapBulletMuzzle(AActor* SelfActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetBulletEmiiterOverlapSphere(TArray<FPalWazaBulletEmiiterOverlapSphere>& Spheres);
    
};

