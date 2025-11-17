#include "FieldSystemMetaDataFilter.h"

UFieldSystemMetaDataFilter::UFieldSystemMetaDataFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FilterType = EFieldFilterType::Field_Filter_Dynamic;
    this->ObjectType = EFieldObjectType::Field_Object_Rigid;
    this->PositionType = EFieldPositionType::Field_Position_CenterOfMass;
}

UFieldSystemMetaDataFilter* UFieldSystemMetaDataFilter::SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> NewFilterType, TEnumAsByte<EFieldObjectType> NewObjectType, TEnumAsByte<EFieldPositionType> NewPositionType) {
    return NULL;
}


