#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "ModularPawn.generated.h"

UCLASS()
class MODULARGAMEPLAYACTORS_API AModularPawn : public APawn {
    GENERATED_BODY()
public:
    AModularPawn(const FObjectInitializer& ObjectInitializer);

};

