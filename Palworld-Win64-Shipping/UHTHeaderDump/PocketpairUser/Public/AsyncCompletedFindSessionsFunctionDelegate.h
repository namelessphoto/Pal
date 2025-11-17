#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "AsyncCompletedFindSessionsFunctionDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAsyncCompletedFindSessionsFunction, bool, IsSuccess, const TArray<FBlueprintSessionResult>&, Results, const FString&, ErrorStr);

