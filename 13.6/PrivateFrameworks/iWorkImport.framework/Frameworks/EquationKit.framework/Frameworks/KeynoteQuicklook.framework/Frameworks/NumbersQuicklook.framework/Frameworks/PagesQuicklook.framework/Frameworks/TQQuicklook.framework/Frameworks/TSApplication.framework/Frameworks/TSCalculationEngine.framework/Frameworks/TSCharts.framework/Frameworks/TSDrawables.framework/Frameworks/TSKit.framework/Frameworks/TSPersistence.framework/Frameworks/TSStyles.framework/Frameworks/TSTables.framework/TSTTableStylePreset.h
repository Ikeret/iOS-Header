//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSTables/TSKModel-Protocol.h>
#import <TSTables/TSSPreset-Protocol.h>
#import <TSTables/TSSStyleClient-Protocol.h>

@class NSString, TSTTableStyleNetwork;

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel>
{
    TSTTableStyleNetwork *_styleNetwork;
    _Bool _tableHasStrongOwnership;
    unsigned long long _tempUpgradePresetID;
}

+ (_Bool)needsObjectUUID;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long tempUpgradePresetID; // @synthesize tempUpgradePresetID=_tempUpgradePresetID;
@property(nonatomic) _Bool tableHasStrongOwnership; // @synthesize tableHasStrongOwnership=_tableHasStrongOwnership;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TableStylePresetArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)swatchImage;
@property(readonly, nonatomic) NSString *presetKind;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithStyleNetwork:(id)arg1;
- (id)p_documentRoot;
@property(copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property(readonly, nonatomic) unsigned long long presetID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

