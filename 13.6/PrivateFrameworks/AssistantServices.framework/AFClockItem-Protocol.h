//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSDate, NSURL, NSUUID;

@protocol AFClockItem <NSObject>
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, copy, nonatomic) NSDate *dismissedDate;
@property(readonly, copy, nonatomic) NSDate *firedDate;
@property(readonly, nonatomic) _Bool isFiring;
@property(readonly, nonatomic) NSURL *itemURL;
@property(readonly, nonatomic) NSUUID *itemID;
@end

