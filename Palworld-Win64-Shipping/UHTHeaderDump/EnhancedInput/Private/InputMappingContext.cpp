#include "InputMappingContext.h"

UInputMappingContext::UInputMappingContext() {
}

void UInputMappingContext::UnmapKey(const UInputAction* action, FKey Key) {
}

void UInputMappingContext::UnmapAllKeysFromAction(const UInputAction* action) {
}

void UInputMappingContext::UnmapAll() {
}

void UInputMappingContext::UnmapAction(const UInputAction* action) {
}

FEnhancedActionKeyMapping UInputMappingContext::MapKey(const UInputAction* action, FKey ToKey) {
    return FEnhancedActionKeyMapping{};
}


