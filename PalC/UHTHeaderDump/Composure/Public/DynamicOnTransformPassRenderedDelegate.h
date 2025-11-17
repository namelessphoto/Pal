#pragma once
#include "CoreMinimal.h"
#include "DynamicOnTransformPassRenderedDelegate.generated.h"

class ACompositingElement;
class UTexture;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDynamicOnTransformPassRendered, ACompositingElement*, CompElement, UTexture*, Texture, FName, PassName);

