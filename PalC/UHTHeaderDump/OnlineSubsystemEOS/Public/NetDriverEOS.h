#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SocketSubsystemEOS -ObjectName=NetDriverEOSBase -FallbackName=NetDriverEOSBase
#include "NetDriverEOS.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMEOS_API UNetDriverEOS : public UNetDriverEOSBase {
    GENERATED_BODY()
public:
    UNetDriverEOS();

};

