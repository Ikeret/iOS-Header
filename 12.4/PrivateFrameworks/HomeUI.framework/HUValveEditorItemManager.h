//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HUControlPanelControllerDelegate-Protocol.h>

@class HFControlPanelItemProvider, HFItem, HFServiceBuilder, HFStaticItem, HFStaticItemProvider, HFValveServiceItem, HUControlPanelController, NSString;

@interface HUValveEditorItemManager : HFItemManager <HUControlPanelControllerDelegate>
{
    HFItem *_nameItem;
    HFStaticItem *_identifyItem;
    HUControlPanelController *_controlPanelController;
    HFServiceBuilder *_serviceBuilder;
    unsigned long long _editorMode;
    HFValveServiceItem *_sourceValveItem;
    HFControlPanelItemProvider *_controlPanelItemProvider;
    HFStaticItemProvider *_staticItemProvider;
}

+ (CDUnknownBlockType)sortComparatorForValveEditorSections;
+ (id)preferredSectionSortArray;
@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(retain, nonatomic) HFControlPanelItemProvider *controlPanelItemProvider; // @synthesize controlPanelItemProvider=_controlPanelItemProvider;
@property(retain, nonatomic) HFValveServiceItem *sourceValveItem; // @synthesize sourceValveItem=_sourceValveItem;
@property(readonly, nonatomic) unsigned long long editorMode; // @synthesize editorMode=_editorMode;
@property(retain, nonatomic) HFServiceBuilder *serviceBuilder; // @synthesize serviceBuilder=_serviceBuilder;
@property(retain, nonatomic) HUControlPanelController *controlPanelController; // @synthesize controlPanelController=_controlPanelController;
@property(retain, nonatomic) HFStaticItem *identifyItem; // @synthesize identifyItem=_identifyItem;
@property(retain, nonatomic) HFItem *nameItem; // @synthesize nameItem=_nameItem;
- (void).cxx_destruct;
- (void)controlPanelController:(id)arg1 didEndPossibleWritesForControlItem:(id)arg2;
- (void)controlPanelController:(id)arg1 willBeginPossibleWritesForControlItem:(id)arg2;
- (id)_characteristicsAffectedByControlItem:(id)arg1;
- (id)_characteristicTypesForControlPanelItem:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 editorMode:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

