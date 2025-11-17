#include "StructUtilsFunctionLibrary.h"

UStructUtilsFunctionLibrary::UStructUtilsFunctionLibrary() {
}

void UStructUtilsFunctionLibrary::SetInstancedStructValue(FInstancedStruct& InstancedStruct, const int32& Value) {
}

void UStructUtilsFunctionLibrary::Reset(FInstancedStruct& InstancedStruct, const UScriptStruct* StructType) {
}

bool UStructUtilsFunctionLibrary::NotEqual_InstancedStruct(const FInstancedStruct& A, const FInstancedStruct& B) {
    return false;
}

FInstancedStruct UStructUtilsFunctionLibrary::MakeInstancedStruct(const int32& Value) {
    return FInstancedStruct{};
}

bool UStructUtilsFunctionLibrary::IsValid_InstancedStruct(const FInstancedStruct& InstancedStruct) {
    return false;
}

EStructUtilsResult UStructUtilsFunctionLibrary::IsInstancedStructValid(const FInstancedStruct& InstancedStruct) {
    return EStructUtilsResult::Valid;
}

void UStructUtilsFunctionLibrary::GetInstancedStructValue(EStructUtilsResult& ExecResult, const FInstancedStruct& InstancedStruct, int32& Value) {
}

bool UStructUtilsFunctionLibrary::EqualEqual_InstancedStruct(const FInstancedStruct& A, const FInstancedStruct& B) {
    return false;
}


