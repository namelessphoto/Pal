#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "PalDebugInfoGameInstanceSubsystem.generated.h"

class UFont;

UCLASS()
class PAL_API UPalDebugInfoGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UFont* FontObject;
    
public:
    UPalDebugInfoGameInstanceSubsystem();

};

