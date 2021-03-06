//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKEnumeratableFaceCollection-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceObserver-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, NSUUID, NTKFace;

@interface NTKFaceCollection : NSObject <NTKFaceObserver, NTKEnumeratableFaceCollection>
{
    NSString *_logIdentifier;
    NSUUID *_selectedUUID;
    NSMutableArray *_orderedUUIDs;
    NSMutableDictionary *_facesByUUID;
    NSMapTable *_UUIDsByFace;
    NSHashTable *_observers;
    NSString *_collectionIdentifier;
    NSUUID *_deviceUUID;
    NSString *_debugName;
}

@property(retain, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
@property(readonly, nonatomic) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(readonly, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
- (void).cxx_destruct;
- (void)_updateLogIdentifier;
- (void)_throwIfNotLoaded:(SEL)arg1;
- (void)_systemAppStateDidChange;
- (id)logIdentifier;
- (id)observers;
- (id)UUIDsByFace;
- (id)selectedUUID;
- (id)facesByUUID;
- (id)orderedUUIDs;
- (void)_notifyReorderedFacesOmittingObserver:(id)arg1;
- (void)_notifySelectedFaceOmittingObserver:(id)arg1;
- (void)_notifyRemovedFace:(id)arg1 atIndex:(unsigned long long)arg2 omitObserver:(id)arg3;
- (void)_notifyAddedFace:(id)arg1 atIndex:(unsigned long long)arg2 omitObserver:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)replaceFaceLocallyByCopy:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (id)_chooseNewSelectionBecauseSelectedUUIDWillBeRemovedAtIndex:(unsigned long long)arg1;
- (void)_setSelectedUUID:(id)arg1 notify:(_Bool)arg2 suppressingCallbackToObserver:(id)arg3;
- (void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3 suppressingCallbackToObserver:(id)arg4;
- (void)_removeFaceForUUID:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)_upgradeFace:(id)arg1 forUUID:(id)arg2;
- (void)_updateOrderedUUIDsFromReference:(id)arg1 andNotifyReordered:(_Bool)arg2;
- (void)_selectFaceUUID:(id)arg1 notify:(_Bool)arg2;
- (void)_removeFaceForUUID:(id)arg1;
- (void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_didRemoveFace:(id)arg1 withUUID:(id)arg2;
- (void)_didSelectFaceUUID:(id)arg1;
- (void)_didMoveFace:(id)arg1 withUUID:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)_didAddFace:(id)arg1 withUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_setContentWithFaces:(id)arg1 order:(id)arg2 selection:(id)arg3;
- (void)reset;
- (void)removeFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)removeFaceAtIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)moveFace:(id)arg1 toIndex:(unsigned long long)arg2 suppressingCallbackToObserver:(id)arg3;
- (void)addFace:(id)arg1 atIndex:(unsigned long long)arg2 suppressingCallbackToObserver:(id)arg3;
- (void)appendFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)setSelectedFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)setSelectedFaceIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2;
@property(readonly, nonatomic, getter=hasLoaded) _Bool hasLoaded;
@property(readonly, nonatomic) unsigned long long selectedFaceIndex;
- (void)enumerateFaceNamesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFacesWithIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFacesUsingBlock:(CDUnknownBlockType)arg1;
- (id)faceAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NTKFace *selectedFace;
- (_Bool)containsFace:(id)arg1;
- (unsigned long long)indexOfFace:(id)arg1;
- (unsigned long long)numberOfFaces;
- (void)dealloc;
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

