//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKKaleidoscopeFace : NTKFace
{
}

+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)_customEditMode:(long long)arg1 hasActionForOption:(id)arg2 forDevice:(id)arg3;
+ (id)_orderedComplicationSlots;
+ (id)_complicationSlotDescriptors;
- (id)editOptionThatHidesAllComplications;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (Class)_optionClassForCustomEditMode:(long long)arg1 resourceDirectoryExists:(_Bool)arg2;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_customEditModes;

@end

