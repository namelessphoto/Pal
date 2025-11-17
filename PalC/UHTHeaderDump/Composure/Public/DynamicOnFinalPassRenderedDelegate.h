#pragma once
#include "CoreMinimal.h"
#include "DynamicOnFinalPassRenderedDelegate.generated.h"

class ACompositingElement;
class UTexture;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDynamicOnFinalPassRendered, ACompositingElement*, CompElement, UTexture*, Texture);

