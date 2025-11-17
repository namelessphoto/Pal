#include "PalStaticArmorItemData.h"

UPalStaticArmorItemData::UPalStaticArmorItemData() {
    this->AttackValua = 0;
    this->DefenseValua = 0;
    this->HPValua = 0;
    this->ShieldValua = 0;
}

int32 UPalStaticArmorItemData::GetShieldValue() const {
    return 0;
}

int32 UPalStaticArmorItemData::GetHPValue() const {
    return 0;
}

int32 UPalStaticArmorItemData::GetDefenseValue() const {
    return 0;
}

int32 UPalStaticArmorItemData::GetAttackValue() const {
    return 0;
}


