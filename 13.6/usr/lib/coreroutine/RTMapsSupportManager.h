//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RTMapServiceManager, RTTimerManager;
@protocol OS_dispatch_queue;

@interface RTMapsSupportManager : NSObject
{
    RTMapServiceManager *_mapServiceManager;
    NSObject<OS_dispatch_queue> *_queue;
    RTTimerManager *_timerManager;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RTTimerManager *timerManager; // @synthesize timerManager=_timerManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
- (void)_fetchHistoryEntryRoutesWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchHistoryEntryPlaceDisplaysWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchPinnedPlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchFavoritePlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)_clearParkedCarBulletin;
- (void)_showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
- (void)_showParkedCarBulletinForEvent:(id)arg1;
- (void)fetchHistoryEntryRoutesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchHistoryEntryPlaceDisplaysWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchPinnedPlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchFavoritePlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)clearParkedCarBulletin;
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
- (void)showParkedCarBulletinForEvent:(id)arg1;
- (id)initWithMapServiceManager:(id)arg1 timerManager:(id)arg2;
- (id)initWithMapServiceManager:(id)arg1;
- (id)init;

@end

