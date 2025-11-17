#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalStaticMeshImposterStaticMeshInfo.h"
#include "PalStaticMeshImposterInterface.generated.h"

class UStaticMeshComponent;

UINTERFACE(Blueprintable)
class UPalStaticMeshImposterInterface : public UInterface {
    GENERATED_BODY()
};

class IPalStaticMeshImposterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetStaticMeshComponents(TArray<UStaticMeshComponent*>& OutComponents) const;
    
};

